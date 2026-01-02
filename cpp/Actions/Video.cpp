#include "Video.hpp"

Video::Video(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Video::add(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.add", access_token, params);
}

nlohmann::json Video::addAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.addAlbum", access_token, params);
}

nlohmann::json Video::addToAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.addToAlbum", access_token, params);
}

nlohmann::json Video::createComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.createComment", access_token, params);
}

nlohmann::json Video::deleteVideo(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.delete", access_token, params);
}

nlohmann::json Video::deleteAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.deleteAlbum", access_token, params);
}

nlohmann::json Video::deleteComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.deleteComment", access_token, params);
}

nlohmann::json Video::deleteThread(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.deleteThread", access_token, params);
}

nlohmann::json Video::edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.edit", access_token, params);
}

nlohmann::json Video::editAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.editAlbum", access_token, params);
}

nlohmann::json Video::editComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.editComment", access_token, params);
}

nlohmann::json Video::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.get", access_token, params);
}

nlohmann::json Video::getAlbumById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.getAlbumById", access_token, params);
}

nlohmann::json Video::getAlbums(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.getAlbums", access_token, params);
}

nlohmann::json Video::getAlbumsByVideo(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.getAlbumsByVideo", access_token, params);
}

nlohmann::json Video::getComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.getComments", access_token, params);
}

nlohmann::json Video::getLongPollServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.getLongPollServer", access_token, params);
}

nlohmann::json Video::getOembed(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.getOembed", access_token, params);
}

nlohmann::json Video::getThumbUploadUrl(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.getThumbUploadUrl", access_token, params);
}

nlohmann::json Video::liveGetCategories(const std::string& access_token) {
    return request_->post("video.liveGetCategories", access_token);
}

nlohmann::json Video::removeFromAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.removeFromAlbum", access_token, params);
}

nlohmann::json Video::reorderAlbums(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.reorderAlbums", access_token, params);
}

nlohmann::json Video::reorderVideos(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.reorderVideos", access_token, params);
}

nlohmann::json Video::report(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.report", access_token, params);
}

nlohmann::json Video::reportComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.reportComment", access_token, params);
}

nlohmann::json Video::restore(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.restore", access_token, params);
}

nlohmann::json Video::restoreComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.restoreComment", access_token, params);
}

nlohmann::json Video::restoreThread(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.restoreThread", access_token, params);
}

nlohmann::json Video::save(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.save", access_token, params);
}

nlohmann::json Video::saveUploadedThumb(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.saveUploadedThumb", access_token, params);
}

nlohmann::json Video::search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.search", access_token, params);
}

nlohmann::json Video::startStreaming(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.startStreaming", access_token, params);
}

nlohmann::json Video::stopStreaming(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.stopStreaming", access_token, params);
}

nlohmann::json Video::unpinComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("video.unpinComment", access_token, params);
}