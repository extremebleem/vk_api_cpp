#include "Fave.hpp"

Fave::Fave(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Fave::addArticle(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.addArticle", access_token, params);
}

nlohmann::json Fave::addLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.addLink", access_token, params);
}

nlohmann::json Fave::addPage(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.addPage", access_token, params);
}

nlohmann::json Fave::addPost(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.addPost", access_token, params);
}

nlohmann::json Fave::addProduct(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.addProduct", access_token, params);
}

nlohmann::json Fave::addTag(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.addTag", access_token, params);
}

nlohmann::json Fave::addVideo(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.addVideo", access_token, params);
}

nlohmann::json Fave::editTag(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.editTag", access_token, params);
}

nlohmann::json Fave::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.get", access_token, params);
}

nlohmann::json Fave::getPages(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.getPages", access_token, params);
}

nlohmann::json Fave::getTags(const std::string& access_token) {
    return request_->post("fave.getTags", access_token);
}

nlohmann::json Fave::markSeen(const std::string& access_token) {
    return request_->post("fave.markSeen", access_token);
}

nlohmann::json Fave::removeArticle(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.removeArticle", access_token, params);
}

nlohmann::json Fave::removeLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.removeLink", access_token, params);
}

nlohmann::json Fave::removePage(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.removePage", access_token, params);
}

nlohmann::json Fave::removePost(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.removePost", access_token, params);
}

nlohmann::json Fave::removeProduct(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.removeProduct", access_token, params);
}

nlohmann::json Fave::removeTag(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.removeTag", access_token, params);
}

nlohmann::json Fave::removeVideo(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.removeVideo", access_token, params);
}

nlohmann::json Fave::reorderTags(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.reorderTags", access_token, params);
}

nlohmann::json Fave::setPageTags(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.setPageTags", access_token, params);
}

nlohmann::json Fave::setTags(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.setTags", access_token, params);
}

nlohmann::json Fave::trackPageInteraction(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("fave.trackPageInteraction", access_token, params);
}
