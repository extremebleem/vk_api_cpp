#include "Docs.hpp"

Docs::Docs(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Docs::add(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("docs.add", access_token, params);
}

nlohmann::json Docs::delete_(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("docs.delete", access_token, params);
}

nlohmann::json Docs::edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("docs.edit", access_token, params);
}

nlohmann::json Docs::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("docs.get", access_token, params);
}

nlohmann::json Docs::getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("docs.getById", access_token, params);
}

nlohmann::json Docs::getMessagesUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("docs.getMessagesUploadServer", access_token, params);
}

nlohmann::json Docs::getTypes(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("docs.getTypes", access_token, params);
}

nlohmann::json Docs::getUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("docs.getUploadServer", access_token, params);
}

nlohmann::json Docs::getWallUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("docs.getWallUploadServer", access_token, params);
}

nlohmann::json Docs::restore(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("docs.restore", access_token, params);
}

nlohmann::json Docs::save(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("docs.save", access_token, params);
}

nlohmann::json Docs::search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("docs.search", access_token, params);
}
