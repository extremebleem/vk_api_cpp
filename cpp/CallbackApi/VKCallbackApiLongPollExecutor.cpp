#include "VKCallbackApiLongPollExecutor.hpp"
#include "../Actions/Groups.hpp"
#include <stdexcept>
#include <sstream>

const std::string VKCallbackApiLongPollExecutor::PARAM_GROUP_ID = "group_id";
const std::string VKCallbackApiLongPollExecutor::PARAM_ACT = "act";
const std::string VKCallbackApiLongPollExecutor::PARAM_KEY = "key";
const std::string VKCallbackApiLongPollExecutor::PARAM_TS = "ts";
const std::string VKCallbackApiLongPollExecutor::PARAM_WAIT = "wait";
const std::string VKCallbackApiLongPollExecutor::VALUE_ACT = "a_check";

const std::string VKCallbackApiLongPollExecutor::EVENTS_FAILED = "failed";
const std::string VKCallbackApiLongPollExecutor::EVENTS_TS = "ts";
const std::string VKCallbackApiLongPollExecutor::EVENTS_UPDATES = "updates";

const std::string VKCallbackApiLongPollExecutor::EVENT_TYPE = "type";
const std::string VKCallbackApiLongPollExecutor::EVENT_OBJECT = "object";

const std::string VKCallbackApiLongPollExecutor::SERVER_TIMESTAMP = "ts";
const std::string VKCallbackApiLongPollExecutor::SERVER_URL = "url";
const std::string VKCallbackApiLongPollExecutor::SERVER_KEY = "key";

VKCallbackApiLongPollExecutor::VKCallbackApiLongPollExecutor(
    std::shared_ptr<VKApiClient> api_client,
    const std::string& access_token,
    int group_id,
    std::shared_ptr<VKCallbackApiHandler> handler,
    int wait
) : api_client_(api_client), access_token_(access_token), group_id_(group_id), 
    handler_(handler), wait_(wait), last_ts_(0) {
    
    curl_ = curl_easy_init();
    if (!curl_) {
        throw std::runtime_error("Failed to initialize CURL");
    }
}

VKCallbackApiLongPollExecutor::~VKCallbackApiLongPollExecutor() {
    if (curl_) {
        curl_easy_cleanup(curl_);
    }
}

size_t VKCallbackApiLongPollExecutor::WriteCallback(void* contents, size_t size, size_t nmemb, std::string* userp) {
    size_t totalSize = size * nmemb;
    userp->append((char*)contents, totalSize);
    return totalSize;
}

int VKCallbackApiLongPollExecutor::listen(int* ts) {
    if (server_.empty()) {
        server_ = getLongPollServer();
    }
    
    if (last_ts_ == 0) {
        last_ts_ = server_[SERVER_TIMESTAMP].get<int>();
    }
    
    int current_ts = ts ? *ts : last_ts_;
    
    try {
        auto response = getEvents(
            server_[SERVER_URL].get<std::string>(),
            server_[SERVER_KEY].get<std::string>(),
            current_ts
        );
        
        for (const auto& event : response[EVENTS_UPDATES]) {
            handler_->parseObject(
                group_id_,
                nullptr,
                event[EVENT_TYPE].get<std::string>(),
                event[EVENT_OBJECT]
            );
        }
        
        last_ts_ = response[EVENTS_TS].get<int>();
    } catch (const std::exception& e) {
        // Key expired, refresh server
        server_ = getLongPollServer();
    }
    
    return last_ts_;
}

nlohmann::json VKCallbackApiLongPollExecutor::getLongPollServer() {
    auto groups = std::dynamic_pointer_cast<Groups>(api_client_->getAction("groups"));
    auto response = groups->getLongPollServer(access_token_, {
        {PARAM_GROUP_ID, std::to_string(group_id_)}
    });
    
    return nlohmann::json{
        {SERVER_URL, response["server"]},
        {SERVER_TIMESTAMP, response["ts"]},
        {SERVER_KEY, response["key"]}
    };
}

nlohmann::json VKCallbackApiLongPollExecutor::getEvents(const std::string& host, const std::string& key, int ts) {
    std::string url = host + "?" + PARAM_KEY + "=" + key + 
                     "&" + PARAM_TS + "=" + std::to_string(ts) +
                     "&" + PARAM_WAIT + "=" + std::to_string(wait_) +
                     "&" + PARAM_ACT + "=" + VALUE_ACT;
    
    std::string response_body;
    
    curl_easy_setopt(curl_, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl_, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl_, CURLOPT_WRITEDATA, &response_body);
    curl_easy_setopt(curl_, CURLOPT_TIMEOUT, CONNECTION_TIMEOUT);
    
    CURLcode res = curl_easy_perform(curl_);
    if (res != CURLE_OK) {
        throw std::runtime_error("CURL request failed: " + std::string(curl_easy_strerror(res)));
    }
    
    long http_code;
    curl_easy_getinfo(curl_, CURLINFO_RESPONSE_CODE, &http_code);
    
    return parseResponse(response_body, http_code);
}

nlohmann::json VKCallbackApiLongPollExecutor::parseResponse(const std::string& response_body, long http_code) {
    if (http_code != HTTP_STATUS_CODE_OK) {
        throw std::runtime_error("Invalid http status: " + std::to_string(http_code));
    }
    
    auto decoded_body = nlohmann::json::parse(response_body);
    
    if (decoded_body.contains(EVENTS_FAILED)) {
        int error_code = decoded_body[EVENTS_FAILED].get<int>();
        switch (error_code) {
            case ERROR_CODE_INCORRECT_TS_VALUE:
                throw std::runtime_error("'ts' value is incorrect");
            case ERROR_CODE_TOKEN_EXPIRED:
                throw std::runtime_error("Try to generate a new key");
            default:
                throw std::runtime_error("Unknown LongPollServer exception: " + response_body);
        }
    }
    
    return decoded_body;
}