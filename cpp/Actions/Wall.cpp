#include "Wall.hpp"

Wall::Wall(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Wall::checkCopyrightLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.checkCopyrightLink", access_token, params);
}

nlohmann::json Wall::closeComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.closeComments", access_token, params);
}

nlohmann::json Wall::createComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.createComment", access_token, params);
}

nlohmann::json Wall::deletePost(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.delete", access_token, params);
}

nlohmann::json Wall::deleteComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.deleteComment", access_token, params);
}

nlohmann::json Wall::edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.edit", access_token, params);
}

nlohmann::json Wall::editAdsStealth(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.editAdsStealth", access_token, params);
}

nlohmann::json Wall::editComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.editComment", access_token, params);
}

nlohmann::json Wall::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.get", access_token, params);
}

nlohmann::json Wall::getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.getById", access_token, params);
}

nlohmann::json Wall::getComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.getComment", access_token, params);
}

nlohmann::json Wall::getComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.getComments", access_token, params);
}

nlohmann::json Wall::getReposts(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.getReposts", access_token, params);
}

nlohmann::json Wall::openComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.openComments", access_token, params);
}

nlohmann::json Wall::parseAttachedLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.parseAttachedLink", access_token, params);
}

nlohmann::json Wall::pin(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.pin", access_token, params);
}

nlohmann::json Wall::post(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.post", access_token, params);
}

nlohmann::json Wall::postAdsStealth(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.postAdsStealth", access_token, params);
}

nlohmann::json Wall::reportComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.reportComment", access_token, params);
}

nlohmann::json Wall::reportPost(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.reportPost", access_token, params);
}

nlohmann::json Wall::repost(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.repost", access_token, params);
}

nlohmann::json Wall::restore(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.restore", access_token, params);
}

nlohmann::json Wall::restoreComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.restoreComment", access_token, params);
}

nlohmann::json Wall::search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.search", access_token, params);
}

nlohmann::json Wall::unpin(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("wall.unpin", access_token, params);
}
