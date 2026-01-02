#include "Account.hpp"

Account::Account(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Account::ban(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("account.ban", access_token, params);
}

nlohmann::json Account::changePassword(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("account.changePassword", access_token, params);
}

nlohmann::json Account::getActiveOffers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("account.getActiveOffers", access_token, params);
}

nlohmann::json Account::getAppPermissions(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("account.getAppPermissions", access_token, params);
}

nlohmann::json Account::getBanned(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("account.getBanned", access_token, params);
}

nlohmann::json Account::getCounters(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("account.getCounters", access_token, params);
}

nlohmann::json Account::getInfo(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("account.getInfo", access_token, params);
}

nlohmann::json Account::getProfileInfo(const std::string& access_token) {
    return request_->post("account.getProfileInfo", access_token);
}

nlohmann::json Account::getPushSettings(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("account.getPushSettings", access_token, params);
}

nlohmann::json Account::registerDevice(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("account.registerDevice", access_token, params);
}

nlohmann::json Account::saveProfileInfo(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("account.saveProfileInfo", access_token, params);
}

nlohmann::json Account::setInfo(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("account.setInfo", access_token, params);
}

nlohmann::json Account::setOffline(const std::string& access_token) {
    return request_->post("account.setOffline", access_token);
}

nlohmann::json Account::setOnline(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("account.setOnline", access_token, params);
}

nlohmann::json Account::setPushSettings(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("account.setPushSettings", access_token, params);
}

nlohmann::json Account::setSilenceMode(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("account.setSilenceMode", access_token, params);
}

nlohmann::json Account::unban(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("account.unban", access_token, params);
}

nlohmann::json Account::unregisterDevice(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("account.unregisterDevice", access_token, params);
}
