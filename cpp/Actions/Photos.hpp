#ifndef PHOTOS_HPP
#define PHOTOS_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Photos : public ActionInterface {
public:
    Photos(std::shared_ptr<VKApiRequest> request);

    nlohmann::json confirmTag(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json copy(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json createAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json createComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json delete_(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getAlbums(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getAlbumsCount(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getAll(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getAllComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getChatUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getMarketAlbumUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getMessagesUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getNewTags(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getOwnerCoverPhotoUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getOwnerPhotoUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getTags(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getUserPhotos(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getWallUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json makeCover(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json move(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json putTag(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json removeTag(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json reorderAlbums(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json reorderPhotos(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json report(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json reportComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json restore(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json restoreComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json save(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json saveMarketAlbumPhoto(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json saveMessagesPhoto(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json saveOwnerCoverPhoto(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json saveOwnerPhoto(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json saveWallPhoto(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // PHOTOS_HPP
