#include "Calls.hpp"

Calls::Calls(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Calls::forceFinish(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("calls.forceFinish", access_token, params);
}

nlohmann::json Calls::start(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("calls.start", access_token, params);
}
