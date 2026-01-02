#include "VKApiRequest.hpp"
#include <iostream>
#include <sstream>
#include <algorithm>

const std::string VKApiRequest::PARAM_VERSION = "v";
const std::string VKApiRequest::PARAM_ACCESS_TOKEN = "access_token";
const std::string VKApiRequest::PARAM_LANG = "lang";

const std::string VKApiRequest::KEY_ERROR = "error";
const std::string VKApiRequest::KEY_RESPONSE = "response";

const long VKApiRequest::CONNECTION_TIMEOUT = 10;
const long VKApiRequest::HTTP_STATUS_CODE_OK = 200;

VKApiRequest::VKApiRequest(const std::string& api_version, const std::string& language, const std::string& host)
    : version_(api_version), language_(language), host_(host) {
    curl_ = curl_easy_init();
    if (!curl_) {
        throw std::runtime_error("Failed to initialize CURL");
    }
    curl_easy_setopt(curl_, CURLOPT_TIMEOUT, CONNECTION_TIMEOUT);
}

VKApiRequest::~VKApiRequest() {
    if (curl_) {
        curl_easy_cleanup(curl_);
    }
}

size_t VKApiRequest::WriteCallback(void* contents, size_t size, size_t nmemb, std::string* userp) {
    size_t totalSize = size * nmemb;
    userp->append((char*)contents, totalSize);
    return totalSize;
}

nlohmann::json VKApiRequest::post(const std::string& method, const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    auto formatted_params = formatParams(params);
    formatted_params[PARAM_ACCESS_TOKEN] = access_token;

    if (formatted_params.find(PARAM_VERSION) == formatted_params.end()) {
        formatted_params[PARAM_VERSION] = version_;
    }

    if (!language_.empty() && formatted_params.find(PARAM_LANG) == formatted_params.end()) {
        formatted_params[PARAM_LANG] = language_;
    }

    std::string url = host_ + "/" + method;
    std::string post_data;

    for (const auto& pair : formatted_params) {
        if (!post_data.empty()) post_data += "&";
        post_data += pair.first + "=" + curl_easy_escape(curl_, pair.second.c_str(), pair.second.length());
    }

    std::string response_body;
    long http_code = 0;

    curl_easy_setopt(curl_, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl_, CURLOPT_POSTFIELDS, post_data.c_str());
    curl_easy_setopt(curl_, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl_, CURLOPT_WRITEDATA, &response_body);

    CURLcode res = curl_easy_perform(curl_);
    curl_easy_getinfo(curl_, CURLINFO_RESPONSE_CODE, &http_code);

    if (res != CURLE_OK) {
        throw std::runtime_error("CURL error: " + std::string(curl_easy_strerror(res)));
    }

    return parseResponse(response_body, http_code);
}

nlohmann::json VKApiRequest::upload(const std::string& upload_url, const std::string& parameter_name, const std::string& path) {
    // Implementation for upload would go here, similar to post but with multipart
    // For now, throw not implemented
    throw std::runtime_error("Upload not implemented yet");
}

nlohmann::json VKApiRequest::parseResponse(const std::string& response_body, long http_code) {
    if (http_code != HTTP_STATUS_CODE_OK) {
        throw std::runtime_error("Invalid HTTP status: " + std::to_string(http_code));
    }

    auto decoded_body = decodeBody(response_body);

    if (decoded_body.contains(KEY_ERROR)) {
        // Handle API error
        throw std::runtime_error("VK API error: " + decoded_body[KEY_ERROR].dump());
    }

    if (decoded_body.contains(KEY_RESPONSE)) {
        return decoded_body[KEY_RESPONSE];
    }

    return decoded_body;
}

std::unordered_map<std::string, std::string> VKApiRequest::formatParams(const std::unordered_map<std::string, std::string>& params) {
    std::unordered_map<std::string, std::string> formatted = params;

    for (auto& pair : formatted) {
        // Convert arrays to comma-separated strings if needed
        // For simplicity, assume strings are already formatted
    }

    return formatted;
}

nlohmann::json VKApiRequest::decodeBody(const std::string& body) {
    try {
        return nlohmann::json::parse(body);
    } catch (const std::exception& e) {
        return nlohmann::json::object();
    }
}
