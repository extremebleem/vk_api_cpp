#include "Translations.hpp"

Translations::Translations(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Translations::translate(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("translations.translate", access_token, params);
}