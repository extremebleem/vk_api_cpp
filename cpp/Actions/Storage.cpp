#include "Storage.hpp"

Storage::Storage(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Storage::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("storage.get", access_token, params);
}

nlohmann::json Storage::getKeys(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("storage.getKeys", access_token, params);
}

nlohmann::json Storage::set(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("storage.set", access_token, params);
}