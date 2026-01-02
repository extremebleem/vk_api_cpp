#include "Secure.hpp"

Secure::Secure(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Secure::addAppEvent(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("secure.addAppEvent", access_token, params);
}

nlohmann::json Secure::checkToken(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("secure.checkToken", access_token, params);
}

nlohmann::json Secure::getAppBalance(const std::string& access_token) {
    return request_->post("secure.getAppBalance", access_token);
}

nlohmann::json Secure::getSMSHistory(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("secure.getSMSHistory", access_token, params);
}

nlohmann::json Secure::getTransactionsHistory(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("secure.getTransactionsHistory", access_token, params);
}

nlohmann::json Secure::getUserLevel(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("secure.getUserLevel", access_token, params);
}

nlohmann::json Secure::giveEventSticker(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("secure.giveEventSticker", access_token, params);
}

nlohmann::json Secure::sendNotification(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("secure.sendNotification", access_token, params);
}

nlohmann::json Secure::sendSMSNotification(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("secure.sendSMSNotification", access_token, params);
}

nlohmann::json Secure::setCounter(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("secure.setCounter", access_token, params);
}