#include "Orders.hpp"

Orders::Orders(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Orders::cancelSubscription(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("orders.cancelSubscription", access_token, params);
}

nlohmann::json Orders::changeState(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("orders.changeState", access_token, params);
}

nlohmann::json Orders::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("orders.get", access_token, params);
}

nlohmann::json Orders::getAmount(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("orders.getAmount", access_token, params);
}

nlohmann::json Orders::getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("orders.getById", access_token, params);
}

nlohmann::json Orders::getUserSubscriptionById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("orders.getUserSubscriptionById", access_token, params);
}

nlohmann::json Orders::getUserSubscriptions(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("orders.getUserSubscriptions", access_token, params);
}
