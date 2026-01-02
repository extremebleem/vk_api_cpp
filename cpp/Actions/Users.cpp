#include "Users.hpp"

Users::Users(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Users::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("users.get", access_token, params);
}

nlohmann::json Users::getFollowers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("users.getFollowers", access_token, params);
}

nlohmann::json Users::getSubscriptions(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("users.getSubscriptions", access_token, params);
}

nlohmann::json Users::report(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("users.report", access_token, params);
}

nlohmann::json Users::search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("users.search", access_token, params);
}
