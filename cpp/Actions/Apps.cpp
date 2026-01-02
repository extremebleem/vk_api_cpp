#include "Apps.hpp"

Apps::Apps(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Apps::addSnippet(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("apps.addSnippet", access_token, params);
}

nlohmann::json Apps::addUsersToTestingGroup(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("apps.addUsersToTestingGroup", access_token, params);
}

nlohmann::json Apps::deleteAppRequests(const std::string& access_token) {
    return request_->post("apps.deleteAppRequests", access_token);
}

nlohmann::json Apps::deleteSnippet(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("apps.deleteSnippet", access_token, params);
}

nlohmann::json Apps::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("apps.get", access_token, params);
}

nlohmann::json Apps::getCatalog(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("apps.getCatalog", access_token, params);
}

nlohmann::json Apps::getFriendsList(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("apps.getFriendsList", access_token, params);
}

nlohmann::json Apps::getLeaderboard(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("apps.getLeaderboard", access_token, params);
}

nlohmann::json Apps::getMiniAppPolicies(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("apps.getMiniAppPolicies", access_token, params);
}

nlohmann::json Apps::getScopes(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("apps.getScopes", access_token, params);
}

nlohmann::json Apps::getScore(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("apps.getScore", access_token, params);
}

nlohmann::json Apps::getSnippets(const std::string& access_token) {
    return request_->post("apps.getSnippets", access_token);
}

nlohmann::json Apps::getTestingGroups(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("apps.getTestingGroups", access_token, params);
}

nlohmann::json Apps::isNotificationsAllowed(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("apps.isNotificationsAllowed", access_token, params);
}

nlohmann::json Apps::promoHasActiveGift(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("apps.promoHasActiveGift", access_token, params);
}

nlohmann::json Apps::promoUseGift(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("apps.promoUseGift", access_token, params);
}

nlohmann::json Apps::removeTestingGroup(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("apps.removeTestingGroup", access_token, params);
}

nlohmann::json Apps::removeUsersFromTestingGroups(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("apps.removeUsersFromTestingGroups", access_token, params);
}

nlohmann::json Apps::sendRequest(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("apps.sendRequest", access_token, params);
}

nlohmann::json Apps::updateMetaForTestingGroup(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("apps.updateMetaForTestingGroup", access_token, params);
}
