#include "Audio.hpp"

Audio::Audio(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Audio::get(const std::string& access_token,
                          const std::unordered_map<std::string, std::string>& params) {
    return request_->get("audio.get", access_token, params);
}

nlohmann::json Audio::getRecommendations(const std::string& access_token,
                                         const std::unordered_map<std::string, std::string>& params) {
    return request_->post("audio.getRecommendations", access_token, params);
}

nlohmann::json Audio::getBroadcastList(const std::string& access_token,
                                       const std::unordered_map<std::string, std::string>& params) {
    return request_->post("audio.getBroadcastList", access_token, params);
}

nlohmann::json Audio::getUploadServer(const std::string& access_token,
                                      const std::unordered_map<std::string, std::string>& params) {
    return request_->post("audio.getUploadServer", access_token, params);
}

nlohmann::json Audio::search(const std::string& access_token,
                             const std::unordered_map<std::string, std::string>& params) {
    return request_->post("audio.search", access_token, params);
}

nlohmann::json Audio::getById(const std::string& access_token,
                              const std::unordered_map<std::string, std::string>& params) {
    return request_->post("audio.getById", access_token, params);
}

nlohmann::json Audio::getAlbums(const std::string& access_token,
                                const std::unordered_map<std::string, std::string>& params) {
    return request_->post("audio.getAlbums", access_token, params);
}

nlohmann::json Audio::getPlaylists(const std::string& access_token,
                                   const std::unordered_map<std::string, std::string>& params) {
    return request_->get("audio.getPlaylists", access_token, params);
}

nlohmann::json Audio::getCount(const std::string& access_token,
                               const std::unordered_map<std::string, std::string>& params) {
    return request_->post("audio.getCount", access_token, params);
}

nlohmann::json Audio::getLyrics(const std::string& access_token,
                                const std::unordered_map<std::string, std::string>& params) {
    return request_->post("audio.getLyrics", access_token, params);
}

nlohmann::json Audio::getStreamMixAudios(const std::string& access_token,
                                         const std::unordered_map<std::string, std::string>& params) {
    auto merged = params;
    if (merged.find("client_id") == merged.end()) {
        merged["client_id"] = "6287487";
    }
    return request_->get("audio.getStreamMixAudios", access_token, merged);
}

nlohmann::json Audio::reorder(const std::string& access_token,
                              const std::unordered_map<std::string, std::string>& params) {
    return request_->post("audio.reorder", access_token, params);
}

nlohmann::json Audio::deleteAudio(const std::string& access_token,
                                  const std::unordered_map<std::string, std::string>& params) {
    return request_->post("audio.delete", access_token, params);
}

nlohmann::json Audio::add(const std::string& access_token,
                          const std::unordered_map<std::string, std::string>& params) {
    return request_->post("audio.add", access_token, params);
}

nlohmann::json Audio::restore(const std::string& access_token,
                              const std::unordered_map<std::string, std::string>& params) {
    auto merged = params;
    if (merged.find("client_id") == merged.end()) {
        merged["client_id"] = "6287487";
    }
    return request_->post("audio.restore", access_token, merged);
}

nlohmann::json Audio::addAlbum(const std::string& access_token,
                               const std::unordered_map<std::string, std::string>& params) {
    return request_->post("audio.addAlbum", access_token, params);
}

nlohmann::json Audio::deleteAlbum(const std::string& access_token,
                                  const std::unordered_map<std::string, std::string>& params) {
    return request_->post("audio.deleteAlbum", access_token, params);
}

nlohmann::json Audio::edit(const std::string& access_token,
                           const std::unordered_map<std::string, std::string>& params) {
    return request_->post("audio.edit", access_token, params);
}

nlohmann::json Audio::editAlbum(const std::string& access_token,
                                const std::unordered_map<std::string, std::string>& params) {
    return request_->post("audio.editAlbum", access_token, params);
}
