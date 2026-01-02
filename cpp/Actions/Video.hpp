#ifndef VIDEO_HPP
#define VIDEO_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Video : public ActionInterface {
public:
    Video(std::shared_ptr<VKApiRequest> request);

    nlohmann::json add(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json addAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json addToAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json createComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteVideo(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteThread(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getAlbumById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getAlbums(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getAlbumsByVideo(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getLongPollServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getOembed(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getThumbUploadUrl(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json liveGetCategories(const std::string& access_token);
    nlohmann::json removeFromAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json reorderAlbums(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json reorderVideos(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json report(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json reportComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json restore(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json restoreComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json restoreThread(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json save(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json saveUploadedThumb(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json startStreaming(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json stopStreaming(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json unpinComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // VIDEO_HPP
