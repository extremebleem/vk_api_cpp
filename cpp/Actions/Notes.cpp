#include "Notes.hpp"

Notes::Notes(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Notes::add(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("notes.add", access_token, params);
}

nlohmann::json Notes::createComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("notes.createComment", access_token, params);
}

nlohmann::json Notes::deleteNote(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("notes.delete", access_token, params);
}

nlohmann::json Notes::deleteComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("notes.deleteComment", access_token, params);
}

nlohmann::json Notes::edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("notes.edit", access_token, params);
}

nlohmann::json Notes::editComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("notes.editComment", access_token, params);
}

nlohmann::json Notes::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("notes.get", access_token, params);
}

nlohmann::json Notes::getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("notes.getById", access_token, params);
}

nlohmann::json Notes::getComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("notes.getComments", access_token, params);
}

nlohmann::json Notes::restoreComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("notes.restoreComment", access_token, params);
}
