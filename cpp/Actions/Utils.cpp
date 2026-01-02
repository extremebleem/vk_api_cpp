#include "Utils.hpp"

Utils::Utils(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Utils::checkLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("utils.checkLink", access_token, params);
}

nlohmann::json Utils::deleteFromLastShortened(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("utils.deleteFromLastShortened", access_token, params);
}

nlohmann::json Utils::getLastShortenedLinks(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("utils.getLastShortenedLinks", access_token, params);
}

nlohmann::json Utils::getLinkStats(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("utils.getLinkStats", access_token, params);
}

nlohmann::json Utils::getServerTime(const std::string& access_token) {
    return request_->post("utils.getServerTime", access_token);
}

nlohmann::json Utils::getShortLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("utils.getShortLink", access_token, params);
}

nlohmann::json Utils::resolveScreenName(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("utils.resolveScreenName", access_token, params);
}
