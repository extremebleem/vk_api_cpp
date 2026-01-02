#ifndef ABSTRACTOAUTH_HPP
#define ABSTRACTOAUTH_HPP

#include <string>
#include <unordered_map>
#include <curl/curl.h>
#include <nlohmann/json.hpp>

class AbstractOAuth {
public:
    static const long CONNECTION_TIMEOUT = 10;
    static const long HTTP_STATUS_CODE_OK = 200;
    
    static const std::string RESPONSE_KEY_ERROR;
    static const std::string RESPONSE_KEY_ERROR_DESCRIPTION;

    AbstractOAuth();
    virtual ~AbstractOAuth();

    float getTimeout() const;
    void setTimeout(float timeout);
    
    const std::string& getHost() const;
    void setHost(const std::string& host);

protected:
    nlohmann::json request(const std::string& method, const std::string& url, 
                          const std::unordered_map<std::string, std::string>& params = {},
                          const std::unordered_map<std::string, std::string>& headers = {});

    nlohmann::json checkOAuthResponse(const std::string& response_body, long http_code);
    nlohmann::json decodeBody(const std::string& body);

private:
    float timeout_;
    std::string host_;
    CURL* curl_;
    
    static size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* userp);
};

#endif // ABSTRACTOAUTH_HPP