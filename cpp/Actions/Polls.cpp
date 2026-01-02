#include "Polls.hpp"

Polls::Polls(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Polls::addVote(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("polls.addVote", access_token, params);
}

nlohmann::json Polls::create(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("polls.create", access_token, params);
}

nlohmann::json Polls::deleteVote(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("polls.deleteVote", access_token, params);
}

nlohmann::json Polls::edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("polls.edit", access_token, params);
}

nlohmann::json Polls::getBackgrounds(const std::string& access_token) {
    return request_->post("polls.getBackgrounds", access_token);
}

nlohmann::json Polls::getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("polls.getById", access_token, params);
}

nlohmann::json Polls::getPhotoUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("polls.getPhotoUploadServer", access_token, params);
}

nlohmann::json Polls::getVoters(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("polls.getVoters", access_token, params);
}

nlohmann::json Polls::savePhoto(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("polls.savePhoto", access_token, params);
}