#include "Widgets.hpp"

Widgets::Widgets(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Widgets::getComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("widgets.getComments", access_token, params);
}

nlohmann::json Widgets::getPages(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("widgets.getPages", access_token, params);
}