#include "Photos.hpp"

Photos::Photos(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Photos::confirmTag(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.confirmTag", access_token, params);
}

nlohmann::json Photos::copy(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.copy", access_token, params);
}

nlohmann::json Photos::createAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.createAlbum", access_token, params);
}

nlohmann::json Photos::createComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.createComment", access_token, params);
}

nlohmann::json Photos::delete_(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.delete", access_token, params);
}

nlohmann::json Photos::deleteAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.deleteAlbum", access_token, params);
}

nlohmann::json Photos::deleteComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.deleteComment", access_token, params);
}

nlohmann::json Photos::edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.edit", access_token, params);
}

nlohmann::json Photos::editAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.editAlbum", access_token, params);
}

nlohmann::json Photos::editComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.editComment", access_token, params);
}

nlohmann::json Photos::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.get", access_token, params);
}

nlohmann::json Photos::getAlbums(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.getAlbums", access_token, params);
}

nlohmann::json Photos::getAlbumsCount(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.getAlbumsCount", access_token, params);
}

nlohmann::json Photos::getAll(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.getAll", access_token, params);
}

nlohmann::json Photos::getAllComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.getAllComments", access_token, params);
}

nlohmann::json Photos::getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.getById", access_token, params);
}

nlohmann::json Photos::getChatUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.getChatUploadServer", access_token, params);
}

nlohmann::json Photos::getComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.getComments", access_token, params);
}

nlohmann::json Photos::getMarketAlbumUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.getMarketAlbumUploadServer", access_token, params);
}

nlohmann::json Photos::getMessagesUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.getMessagesUploadServer", access_token, params);
}

nlohmann::json Photos::getNewTags(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.getNewTags", access_token, params);
}

nlohmann::json Photos::getOwnerCoverPhotoUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.getOwnerCoverPhotoUploadServer", access_token, params);
}

nlohmann::json Photos::getOwnerPhotoUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.getOwnerPhotoUploadServer", access_token, params);
}

nlohmann::json Photos::getTags(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.getTags", access_token, params);
}

nlohmann::json Photos::getUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.getUploadServer", access_token, params);
}

nlohmann::json Photos::getUserPhotos(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.getUserPhotos", access_token, params);
}

nlohmann::json Photos::getWallUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.getWallUploadServer", access_token, params);
}

nlohmann::json Photos::makeCover(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.makeCover", access_token, params);
}

nlohmann::json Photos::move(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.move", access_token, params);
}

nlohmann::json Photos::putTag(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.putTag", access_token, params);
}

nlohmann::json Photos::removeTag(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.removeTag", access_token, params);
}

nlohmann::json Photos::reorderAlbums(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.reorderAlbums", access_token, params);
}

nlohmann::json Photos::reorderPhotos(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.reorderPhotos", access_token, params);
}

nlohmann::json Photos::report(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.report", access_token, params);
}

nlohmann::json Photos::reportComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.reportComment", access_token, params);
}

nlohmann::json Photos::restore(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.restore", access_token, params);
}

nlohmann::json Photos::restoreComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.restoreComment", access_token, params);
}

nlohmann::json Photos::save(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.save", access_token, params);
}

nlohmann::json Photos::saveMarketAlbumPhoto(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.saveMarketAlbumPhoto", access_token, params);
}

nlohmann::json Photos::saveMessagesPhoto(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.saveMessagesPhoto", access_token, params);
}

nlohmann::json Photos::saveOwnerCoverPhoto(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.saveOwnerCoverPhoto", access_token, params);
}

nlohmann::json Photos::saveOwnerPhoto(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.saveOwnerPhoto", access_token, params);
}

nlohmann::json Photos::saveWallPhoto(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.saveWallPhoto", access_token, params);
}

nlohmann::json Photos::search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("photos.search", access_token, params);
}
