#ifndef VKCALLBACKAPILONGPOLLEXECUTOR_HPP
#define VKCALLBACKAPILONGPOLLEXECUTOR_HPP

#include "../VKApiClient.hpp"
#include "VKCallbackApiHandler.hpp"
#include <string>
#include <memory>
#include <curl/curl.h>
#include <nlohmann/json.hpp>

class VKCallbackApiLongPollExecutor {
public:
    static const std::string PARAM_GROUP_ID;
    static const std::string PARAM_ACT;
    static const std::string PARAM_KEY;
    static const std::string PARAM_TS;
    static const std::string PARAM_WAIT;
    static const std::string VALUE_ACT;
    
    static const std::string EVENTS_FAILED;
    static const std::string EVENTS_TS;
    static const std::string EVENTS_UPDATES;
    
    static const std::string EVENT_TYPE;
    static const std::string EVENT_OBJECT;
    
    static const std::string SERVER_TIMESTAMP;
    static const std::string SERVER_URL;
    static const std::string SERVER_KEY;
    
    static const int ERROR_CODE_INCORRECT_TS_VALUE = 1;
    static const int ERROR_CODE_TOKEN_EXPIRED = 2;
    
    static const long CONNECTION_TIMEOUT = 10;
    static const long HTTP_STATUS_CODE_OK = 200;
    static const int DEFAULT_WAIT = 10;

    VKCallbackApiLongPollExecutor(
        std::shared_ptr<VKApiClient> api_client,
        const std::string& access_token,
        int group_id,
        std::shared_ptr<VKCallbackApiHandler> handler,
        int wait = DEFAULT_WAIT
    );
    
    ~VKCallbackApiLongPollExecutor();

    int listen(int* ts = nullptr);
    nlohmann::json getEvents(const std::string& host, const std::string& key, int ts);

private:
    std::shared_ptr<VKApiClient> api_client_;
    std::string access_token_;
    int group_id_;
    std::shared_ptr<VKCallbackApiHandler> handler_;
    int wait_;
    CURL* curl_;
    
    nlohmann::json server_;
    int last_ts_;
    
    nlohmann::json getLongPollServer();
    nlohmann::json parseResponse(const std::string& response_body, long http_code);
    
    static size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* userp);
};

#endif // VKCALLBACKAPILONGPOLLEXECUTOR_HPP