#include "Status.hpp"

Status::Status(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Status::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("status.get", access_token, params);
}

nlohmann::json Status::set(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("status.set", access_token, params);
}