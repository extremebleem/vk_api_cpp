#include "Streaming.hpp"

Streaming::Streaming(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Streaming::getServerUrl(const std::string& access_token) {
    return request_->post("streaming.getServerUrl", access_token);
}

nlohmann::json Streaming::getStats(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("streaming.getStats", access_token, params);
}

nlohmann::json Streaming::getStem(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("streaming.getStem", access_token, params);
}