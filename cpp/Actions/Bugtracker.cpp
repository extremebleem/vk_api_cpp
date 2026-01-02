#include "Bugtracker.hpp"

Bugtracker::Bugtracker(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Bugtracker::addCompanyGroupsMembers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("bugtracker.addCompanyGroupsMembers", access_token, params);
}

nlohmann::json Bugtracker::addCompanyMembers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("bugtracker.addCompanyMembers", access_token, params);
}

nlohmann::json Bugtracker::changeBugreportStatus(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("bugtracker.changeBugreportStatus", access_token, params);
}

nlohmann::json Bugtracker::createComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("bugtracker.createComment", access_token, params);
}

nlohmann::json Bugtracker::getBugreportById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("bugtracker.getBugreportById", access_token, params);
}

nlohmann::json Bugtracker::getCompanyGroupMembers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("bugtracker.getCompanyGroupMembers", access_token, params);
}

nlohmann::json Bugtracker::getCompanyMembers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("bugtracker.getCompanyMembers", access_token, params);
}

nlohmann::json Bugtracker::getDownloadVersionUrl(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("bugtracker.getDownloadVersionUrl", access_token, params);
}

nlohmann::json Bugtracker::getProductBuildUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("bugtracker.getProductBuildUploadServer", access_token, params);
}

nlohmann::json Bugtracker::removeCompanyGroupMember(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("bugtracker.removeCompanyGroupMember", access_token, params);
}

nlohmann::json Bugtracker::removeCompanyMember(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("bugtracker.removeCompanyMember", access_token, params);
}

nlohmann::json Bugtracker::saveProductVersion(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("bugtracker.saveProductVersion", access_token, params);
}

nlohmann::json Bugtracker::setCompanyMemberRole(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("bugtracker.setCompanyMemberRole", access_token, params);
}

nlohmann::json Bugtracker::setProductIsOver(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("bugtracker.setProductIsOver", access_token, params);
}
