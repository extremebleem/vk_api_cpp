#include "Pages.hpp"

Pages::Pages(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Pages::clearCache(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("pages.clearCache", access_token, params);
}

nlohmann::json Pages::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("pages.get", access_token, params);
}

nlohmann::json Pages::getHistory(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("pages.getHistory", access_token, params);
}

nlohmann::json Pages::getVersion(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("pages.getVersion", access_token, params);
}

nlohmann::json Pages::parseWiki(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("pages.parseWiki", access_token, params);
}

nlohmann::json Pages::save(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("pages.save", access_token, params);
}

nlohmann::json Pages::saveAccess(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("pages.saveAccess", access_token, params);
}
