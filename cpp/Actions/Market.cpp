#include "Market.hpp"

Market::Market(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Market::add(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.add", access_token, params);
}

nlohmann::json Market::addAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.addAlbum", access_token, params);
}

nlohmann::json Market::addProperty(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.addProperty", access_token, params);
}

nlohmann::json Market::addPropertyVariant(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.addPropertyVariant", access_token, params);
}

nlohmann::json Market::addToAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.addToAlbum", access_token, params);
}

nlohmann::json Market::createComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.createComment", access_token, params);
}

nlohmann::json Market::delete_(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.delete", access_token, params);
}

nlohmann::json Market::deleteAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.deleteAlbum", access_token, params);
}

nlohmann::json Market::deleteComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.deleteComment", access_token, params);
}

nlohmann::json Market::deleteProperty(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.deleteProperty", access_token, params);
}

nlohmann::json Market::deletePropertyVariant(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.deletePropertyVariant", access_token, params);
}

nlohmann::json Market::edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.edit", access_token, params);
}

nlohmann::json Market::editAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.editAlbum", access_token, params);
}

nlohmann::json Market::editComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.editComment", access_token, params);
}

nlohmann::json Market::editOrder(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.editOrder", access_token, params);
}

nlohmann::json Market::editProperty(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.editProperty", access_token, params);
}

nlohmann::json Market::editPropertyVariant(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.editPropertyVariant", access_token, params);
}

nlohmann::json Market::filterCategories(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.filterCategories", access_token, params);
}

nlohmann::json Market::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.get", access_token, params);
}

nlohmann::json Market::getAlbumById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.getAlbumById", access_token, params);
}

nlohmann::json Market::getAlbums(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.getAlbums", access_token, params);
}

nlohmann::json Market::getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.getById", access_token, params);
}

nlohmann::json Market::getCategories(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.getCategories", access_token, params);
}

nlohmann::json Market::getComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.getComments", access_token, params);
}

nlohmann::json Market::getFavesForAttach(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.getFavesForAttach", access_token, params);
}

nlohmann::json Market::getGroupOrders(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.getGroupOrders", access_token, params);
}

nlohmann::json Market::getOrderById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.getOrderById", access_token, params);
}

nlohmann::json Market::getOrderItems(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.getOrderItems", access_token, params);
}

nlohmann::json Market::getOrders(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.getOrders", access_token, params);
}

nlohmann::json Market::getProductPhotoUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.getProductPhotoUploadServer", access_token, params);
}

nlohmann::json Market::getProperties(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.getProperties", access_token, params);
}

nlohmann::json Market::groupItems(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.groupItems", access_token, params);
}

nlohmann::json Market::removeFromAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.removeFromAlbum", access_token, params);
}

nlohmann::json Market::reorderAlbums(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.reorderAlbums", access_token, params);
}

nlohmann::json Market::reorderItems(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.reorderItems", access_token, params);
}

nlohmann::json Market::report(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.report", access_token, params);
}

nlohmann::json Market::reportComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.reportComment", access_token, params);
}

nlohmann::json Market::restore(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.restore", access_token, params);
}

nlohmann::json Market::restoreComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.restoreComment", access_token, params);
}

nlohmann::json Market::saveProductPhoto(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.saveProductPhoto", access_token, params);
}

nlohmann::json Market::saveProductPhotoBulk(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.saveProductPhotoBulk", access_token, params);
}

nlohmann::json Market::search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.search", access_token, params);
}

nlohmann::json Market::searchItems(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.searchItems", access_token, params);
}

nlohmann::json Market::searchItemsBasic(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.searchItemsBasic", access_token, params);
}

nlohmann::json Market::ungroupItems(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("market.ungroupItems", access_token, params);
}
