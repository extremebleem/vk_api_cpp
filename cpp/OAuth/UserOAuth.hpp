#ifndef USEROAUTH_HPP
#define USEROAUTH_HPP

#include "AbstractOAuth.hpp"
#include <unordered_map>

class UserOAuth : public AbstractOAuth {
public:
    static const std::string HOST;
    static const std::string ENDPOINT_AUTHORIZE;
    static const std::string ENDPOINT_TOKEN;
    static const std::string ENDPOINT_REVOKE;
    static const std::string ENDPOINT_LOGOUT;
    static const std::string ENDPOINT_USER_INFO;
    static const std::string ENDPOINT_PUBLIC_INFO;

    UserOAuth();

    std::string getAuthorizeUrl(const std::unordered_map<std::string, std::string>& params);
    nlohmann::json getTokens(const std::unordered_map<std::string, std::string>& params);
    nlohmann::json refreshTokens(const std::unordered_map<std::string, std::string>& params);
    nlohmann::json logout(const std::unordered_map<std::string, std::string>& params);
    nlohmann::json revoke(const std::unordered_map<std::string, std::string>& params);
    nlohmann::json getUserInfo(const std::unordered_map<std::string, std::string>& params);
    nlohmann::json getUserPublicInfo(const std::unordered_map<std::string, std::string>& params);

private:
    std::string buildQuery(const std::unordered_map<std::string, std::string>& params);
};

#endif // USEROAUTH_HPP