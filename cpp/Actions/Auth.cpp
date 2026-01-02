#include "Auth.hpp"

Auth::Auth(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Auth::restore(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("auth.restore", access_token, params);
}
