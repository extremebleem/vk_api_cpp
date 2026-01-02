#include "Notifications.hpp"

Notifications::Notifications(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Notifications::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("notifications.get", access_token, params);
}

nlohmann::json Notifications::markAsViewed(const std::string& access_token) {
    return request_->post("notifications.markAsViewed", access_token, {});
}

nlohmann::json Notifications::sendMessage(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("notifications.sendMessage", access_token, params);
}
