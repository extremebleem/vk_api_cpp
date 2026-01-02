#include "Donut.hpp"

Donut::Donut(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Donut::getFriends(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("donut.getFriends", access_token, params);
}

nlohmann::json Donut::getSubscription(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("donut.getSubscription", access_token, params);
}

nlohmann::json Donut::getSubscriptions(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("donut.getSubscriptions", access_token, params);
}

nlohmann::json Donut::isDon(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("donut.isDon", access_token, params);
}
