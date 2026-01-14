#ifndef VK_API_REQUEST_HPP
#define VK_API_REQUEST_HPP

#include <string>
#include <unordered_map>
#include <memory>
#include <curl/curl.h>
#include <nlohmann/json.hpp>

class VKApiRequest {
public:
    static const std::string PARAM_VERSION;
    static const std::string PARAM_ACCESS_TOKEN;
    static const std::string PARAM_LANG;

    static const std::string KEY_ERROR;
    static const std::string KEY_RESPONSE;

    static const long CONNECTION_TIMEOUT;
    static const long HTTP_STATUS_CODE_OK;

    VKApiRequest(const std::string& api_version, const std::string& language, const std::string& host);

    ~VKApiRequest();

    nlohmann::json get(const std::string& method, const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json post(const std::string& method, const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

    nlohmann::json upload(const std::string& upload_url, const std::string& parameter_name, const std::string& path);

private:
    std::string host_;
    std::string version_;
    std::string language_;
    CURL* curl_;

    static size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* userp);

    nlohmann::json parseResponse(const std::string& response_body, long http_code);

    std::unordered_map<std::string, std::string> formatParams(const std::unordered_map<std::string, std::string>& params);

    nlohmann::json decodeBody(const std::string& body);
};

#endif // VK_API_REQUEST_HPP
