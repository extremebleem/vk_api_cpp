#include "Execute.hpp"

Execute::Execute(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Execute::execute(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("execute", access_token, params);
}