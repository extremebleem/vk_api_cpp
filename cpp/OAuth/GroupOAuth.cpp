#include "GroupOAuth.hpp"

const std::string GroupOAuth::VERSION = "5.199";
const std::string GroupOAuth::HOST = "https://oauth.vk.com";
const std::string GroupOAuth::ENDPOINT_AUTHORIZE = "/authorize";
const std::string GroupOAuth::ENDPOINT_ACCESS_TOKEN = "/access_token";

GroupOAuth::GroupOAuth() : version_(VERSION) {
    setHost(HOST);
}

const std::string& GroupOAuth::getVersion() const {
    return version_;
}

void GroupOAuth::setVersion(const std::string& version) {
    version_ = version;
}

std::string GroupOAuth::buildQuery(const std::unordered_map<std::string, std::string>& params) {
    std::string query;
    for (const auto& param : params) {
        if (!query.empty()) query += "&";
        query += param.first + "=" + param.second;
    }
    return query;
}

std::string GroupOAuth::getAuthorizeUrl(const std::unordered_map<std::string, std::string>& params) {
    auto params_with_version = params;
    params_with_version["v"] = version_;
    return getHost() + ENDPOINT_AUTHORIZE + "?" + buildQuery(params_with_version);
}

nlohmann::json GroupOAuth::getAccessToken(const std::unordered_map<std::string, std::string>& params) {
    return request("GET", getHost() + ENDPOINT_ACCESS_TOKEN + "?" + buildQuery(params));
}