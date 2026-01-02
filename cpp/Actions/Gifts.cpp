#include "Gifts.hpp"

Gifts::Gifts(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Gifts::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("gifts.get", access_token, params);
}
