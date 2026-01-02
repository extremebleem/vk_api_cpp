#include "AppWidgets.hpp"

AppWidgets::AppWidgets(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json AppWidgets::getAppImageUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("appWidgets.getAppImageUploadServer", access_token, params);
}

nlohmann::json AppWidgets::getAppImages(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("appWidgets.getAppImages", access_token, params);
}

nlohmann::json AppWidgets::getGroupImageUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("appWidgets.getGroupImageUploadServer", access_token, params);
}

nlohmann::json AppWidgets::getGroupImages(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("appWidgets.getGroupImages", access_token, params);
}

nlohmann::json AppWidgets::getImagesById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("appWidgets.getImagesById", access_token, params);
}

nlohmann::json AppWidgets::saveAppImage(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("appWidgets.saveAppImage", access_token, params);
}

nlohmann::json AppWidgets::saveGroupImage(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("appWidgets.saveGroupImage", access_token, params);
}

nlohmann::json AppWidgets::update(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("appWidgets.update", access_token, params);
}
