#include "Stories.hpp"

Stories::Stories(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Stories::banOwner(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("stories.banOwner", access_token, params);
}

// nlohmann::json Stories::delete(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
//     return request_->post("stories.delete", access_token, params);
// }

nlohmann::json Stories::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("stories.get", access_token, params);
}

nlohmann::json Stories::getBanned(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("stories.getBanned", access_token, params);
}

nlohmann::json Stories::getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("stories.getById", access_token, params);
}

nlohmann::json Stories::getPhotoUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("stories.getPhotoUploadServer", access_token, params);
}

nlohmann::json Stories::getReplies(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("stories.getReplies", access_token, params);
}

nlohmann::json Stories::getStats(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("stories.getStats", access_token, params);
}

nlohmann::json Stories::getVideoUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("stories.getVideoUploadServer", access_token, params);
}

nlohmann::json Stories::getViewers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("stories.getViewers", access_token, params);
}

nlohmann::json Stories::hideAllReplies(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("stories.hideAllReplies", access_token, params);
}

nlohmann::json Stories::hideReply(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("stories.hideReply", access_token, params);
}

nlohmann::json Stories::save(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("stories.save", access_token, params);
}

nlohmann::json Stories::search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("stories.search", access_token, params);
}

nlohmann::json Stories::sendInteraction(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("stories.sendInteraction", access_token, params);
}

nlohmann::json Stories::unbanOwner(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("stories.unbanOwner", access_token, params);
}