#include "PrettyCards.hpp"

PrettyCards::PrettyCards(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json PrettyCards::create(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("prettyCards.create", access_token, params);
}

nlohmann::json PrettyCards::delete_(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("prettyCards.delete", access_token, params);
}

nlohmann::json PrettyCards::edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("prettyCards.edit", access_token, params);
}

nlohmann::json PrettyCards::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("prettyCards.get", access_token, params);
}

nlohmann::json PrettyCards::getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("prettyCards.getById", access_token, params);
}

nlohmann::json PrettyCards::getUploadURL(const std::string& access_token) {
    return request_->post("prettyCards.getUploadURL", access_token);
}