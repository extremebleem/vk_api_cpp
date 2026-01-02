#include "Friends.hpp"

Friends::Friends(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Friends::add(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("friends.add", access_token, params);
}

nlohmann::json Friends::addList(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("friends.addList", access_token, params);
}

nlohmann::json Friends::areFriends(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("friends.areFriends", access_token, params);
}

nlohmann::json Friends::delete_(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("friends.delete", access_token, params);
}

nlohmann::json Friends::deleteAllRequests(const std::string& access_token) {
    return request_->post("friends.deleteAllRequests", access_token);
}

nlohmann::json Friends::deleteList(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("friends.deleteList", access_token, params);
}

nlohmann::json Friends::edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("friends.edit", access_token, params);
}

nlohmann::json Friends::editList(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("friends.editList", access_token, params);
}

nlohmann::json Friends::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("friends.get", access_token, params);
}

nlohmann::json Friends::getAppUsers(const std::string& access_token) {
    return request_->post("friends.getAppUsers", access_token);
}

nlohmann::json Friends::getLists(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("friends.getLists", access_token, params);
}

nlohmann::json Friends::getMutual(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("friends.getMutual", access_token, params);
}

nlohmann::json Friends::getOnline(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("friends.getOnline", access_token, params);
}

nlohmann::json Friends::getRecent(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("friends.getRecent", access_token, params);
}

nlohmann::json Friends::getRequests(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("friends.getRequests", access_token, params);
}

nlohmann::json Friends::getSuggestions(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("friends.getSuggestions", access_token, params);
}

nlohmann::json Friends::search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("friends.search", access_token, params);
}
