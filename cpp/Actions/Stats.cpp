#include "Stats.hpp"

Stats::Stats(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Stats::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("stats.get", access_token, params);
}

nlohmann::json Stats::getPostReach(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("stats.getPostReach", access_token, params);
}

nlohmann::json Stats::trackVisitor(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("stats.trackVisitor", access_token, params);
}
