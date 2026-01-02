#include "Newsfeed.hpp"

Newsfeed::Newsfeed(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Newsfeed::addBan(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("newsfeed.addBan", access_token, params);
}

nlohmann::json Newsfeed::deleteBan(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("newsfeed.deleteBan", access_token, params);
}

nlohmann::json Newsfeed::deleteList(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("newsfeed.deleteList", access_token, params);
}

nlohmann::json Newsfeed::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("newsfeed.get", access_token, params);
}

nlohmann::json Newsfeed::getBanned(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("newsfeed.getBanned", access_token, params);
}

nlohmann::json Newsfeed::getComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("newsfeed.getComments", access_token, params);
}

nlohmann::json Newsfeed::getLists(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("newsfeed.getLists", access_token, params);
}

nlohmann::json Newsfeed::getMentions(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("newsfeed.getMentions", access_token, params);
}

nlohmann::json Newsfeed::getRecommended(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("newsfeed.getRecommended", access_token, params);
}

nlohmann::json Newsfeed::getSuggestedSources(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("newsfeed.getSuggestedSources", access_token, params);
}

nlohmann::json Newsfeed::ignoreItem(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("newsfeed.ignoreItem", access_token, params);
}

nlohmann::json Newsfeed::saveList(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("newsfeed.saveList", access_token, params);
}

nlohmann::json Newsfeed::search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("newsfeed.search", access_token, params);
}

nlohmann::json Newsfeed::unignoreItem(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("newsfeed.unignoreItem", access_token, params);
}

nlohmann::json Newsfeed::unsubscribe(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("newsfeed.unsubscribe", access_token, params);
}
