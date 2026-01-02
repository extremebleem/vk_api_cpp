#include "Store.hpp"

Store::Store(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Store::addStickersToFavorite(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("store.addStickersToFavorite", access_token, params);
}

nlohmann::json Store::getFavoriteStickers(const std::string& access_token) {
    return request_->post("store.getFavoriteStickers", access_token, {});
}

nlohmann::json Store::getProducts(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("store.getProducts", access_token, params);
}

nlohmann::json Store::getStickersKeywords(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("store.getStickersKeywords", access_token, params);
}

nlohmann::json Store::removeStickersFromFavorite(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("store.removeStickersFromFavorite", access_token, params);
}
