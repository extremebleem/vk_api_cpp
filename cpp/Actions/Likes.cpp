#include "Likes.hpp"

Likes::Likes(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Likes::add(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("likes.add", access_token, params);
}

nlohmann::json Likes::delete_(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("likes.delete", access_token, params);
}

nlohmann::json Likes::getList(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("likes.getList", access_token, params);
}

nlohmann::json Likes::isLiked(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("likes.isLiked", access_token, params);
}
