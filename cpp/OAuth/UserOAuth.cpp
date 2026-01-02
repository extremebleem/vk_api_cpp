#include "UserOAuth.hpp"
#include <sstream>

const std::string UserOAuth::HOST = "https://id.vk.com";
const std::string UserOAuth::ENDPOINT_AUTHORIZE = "/authorize";
const std::string UserOAuth::ENDPOINT_TOKEN = "/oauth2/auth";
const std::string UserOAuth::ENDPOINT_REVOKE = "/oauth2/revoke";
const std::string UserOAuth::ENDPOINT_LOGOUT = "/oauth2/logout";
const std::string UserOAuth::ENDPOINT_USER_INFO = "/oauth2/user_info";
const std::string UserOAuth::ENDPOINT_PUBLIC_INFO = "/oauth2/public_info";

UserOAuth::UserOAuth() {
    setHost(HOST);
}

std::string UserOAuth::buildQuery(const std::unordered_map<std::string, std::string>& params) {
    std::string query;
    for (const auto& param : params) {
        if (!query.empty()) query += "&";
        query += param.first + "=" + param.second;
    }
    return query;
}

std::string UserOAuth::getAuthorizeUrl(const std::unordered_map<std::string, std::string>& params) {
    return getHost() + ENDPOINT_AUTHORIZE + "?" + buildQuery(params);
}

nlohmann::json UserOAuth::getTokens(const std::unordered_map<std::string, std::string>& params) {
    return request("POST", getHost() + ENDPOINT_TOKEN, params);
}

nlohmann::json UserOAuth::refreshTokens(const std::unordered_map<std::string, std::string>& params) {
    return request("POST", getHost() + ENDPOINT_TOKEN, params);
}

nlohmann::json UserOAuth::logout(const std::unordered_map<std::string, std::string>& params) {
    return request("POST", getHost() + ENDPOINT_LOGOUT, params);
}

nlohmann::json UserOAuth::revoke(const std::unordered_map<std::string, std::string>& params) {
    return request("POST", getHost() + ENDPOINT_REVOKE, params);
}

nlohmann::json UserOAuth::getUserInfo(const std::unordered_map<std::string, std::string>& params) {
    return request("POST", getHost() + ENDPOINT_USER_INFO, params);
}

nlohmann::json UserOAuth::getUserPublicInfo(const std::unordered_map<std::string, std::string>& params) {
    return request("POST", getHost() + ENDPOINT_PUBLIC_INFO, params);
}