#include "AbstractOAuth.hpp"
#include <stdexcept>
#include <sstream>

const std::string AbstractOAuth::RESPONSE_KEY_ERROR = "error";
const std::string AbstractOAuth::RESPONSE_KEY_ERROR_DESCRIPTION = "error_description";

AbstractOAuth::AbstractOAuth() : timeout_(CONNECTION_TIMEOUT) {
    curl_ = curl_easy_init();
    if (!curl_) {
        throw std::runtime_error("Failed to initialize CURL");
    }
}

AbstractOAuth::~AbstractOAuth() {
    if (curl_) {
        curl_easy_cleanup(curl_);
    }
}

float AbstractOAuth::getTimeout() const {
    return timeout_;
}

void AbstractOAuth::setTimeout(float timeout) {
    timeout_ = timeout;
}

const std::string& AbstractOAuth::getHost() const {
    return host_;
}

void AbstractOAuth::setHost(const std::string& host) {
    host_ = host;
    if (!host_.empty() && host_.back() == '/') {
        host_.pop_back();
    }
}

size_t AbstractOAuth::WriteCallback(void* contents, size_t size, size_t nmemb, std::string* userp) {
    size_t totalSize = size * nmemb;
    userp->append((char*)contents, totalSize);
    return totalSize;
}

nlohmann::json AbstractOAuth::request(const std::string& method, const std::string& url,
                                     const std::unordered_map<std::string, std::string>& params,
                                     const std::unordered_map<std::string, std::string>& headers) {
    std::string response_body;
    
    curl_easy_setopt(curl_, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl_, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl_, CURLOPT_WRITEDATA, &response_body);
    curl_easy_setopt(curl_, CURLOPT_TIMEOUT, (long)timeout_);
    
    if (method == "POST") {
        std::string post_data;
        for (const auto& param : params) {
            if (!post_data.empty()) post_data += "&";
            post_data += param.first + "=" + param.second;
        }
        curl_easy_setopt(curl_, CURLOPT_POSTFIELDS, post_data.c_str());
    }
    
    CURLcode res = curl_easy_perform(curl_);
    if (res != CURLE_OK) {
        throw std::runtime_error("CURL request failed: " + std::string(curl_easy_strerror(res)));
    }
    
    long http_code;
    curl_easy_getinfo(curl_, CURLINFO_RESPONSE_CODE, &http_code);
    
    return checkOAuthResponse(response_body, http_code);
}

nlohmann::json AbstractOAuth::checkOAuthResponse(const std::string& response_body, long http_code) {
    if (http_code != HTTP_STATUS_CODE_OK) {
        throw std::runtime_error("Invalid http status: " + std::to_string(http_code));
    }
    
    auto decoded_body = decodeBody(response_body);
    
    if (decoded_body.contains(RESPONSE_KEY_ERROR)) {
        std::string error_msg = decoded_body[RESPONSE_KEY_ERROR_DESCRIPTION].get<std::string>() + 
                               ". OAuth error " + decoded_body[RESPONSE_KEY_ERROR].get<std::string>();
        throw std::runtime_error(error_msg);
    }
    
    return decoded_body;
}

nlohmann::json AbstractOAuth::decodeBody(const std::string& body) {
    try {
        return nlohmann::json::parse(body);
    } catch (const nlohmann::json::parse_error&) {
        return nlohmann::json::object();
    }
}