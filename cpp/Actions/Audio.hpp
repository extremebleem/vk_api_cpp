#ifndef AUDIO_HPP
#define AUDIO_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Audio : public ActionInterface {
public:
    Audio(std::shared_ptr<VKApiRequest> request);

    // audio.get
    nlohmann::json get(const std::string& access_token,
                       const std::unordered_map<std::string, std::string>& params = {});
    // audio.getRecommendations
    nlohmann::json getRecommendations(const std::string& access_token,
                                      const std::unordered_map<std::string, std::string>& params = {});
    // audio.getBroadcastList
    nlohmann::json getBroadcastList(const std::string& access_token,
                                    const std::unordered_map<std::string, std::string>& params = {});
    // audio.getUploadServer
    nlohmann::json getUploadServer(const std::string& access_token,
                                   const std::unordered_map<std::string, std::string>& params = {});
    // audio.search
    nlohmann::json search(const std::string& access_token,
                          const std::unordered_map<std::string, std::string>& params = {});
    // audio.getById
    nlohmann::json getById(const std::string& access_token,
                           const std::unordered_map<std::string, std::string>& params = {});
    // audio.getAlbums
    nlohmann::json getAlbums(const std::string& access_token,
                             const std::unordered_map<std::string, std::string>& params = {});
    // audio.getPlaylists
    nlohmann::json getPlaylists(const std::string& access_token,
                                const std::unordered_map<std::string, std::string>& params = {});
    // audio.getCount
    nlohmann::json getCount(const std::string& access_token,
                            const std::unordered_map<std::string, std::string>& params = {});
    // audio.getLyrics
    nlohmann::json getLyrics(const std::string& access_token,
                             const std::unordered_map<std::string, std::string>& params = {});
    // audio.reorder
    nlohmann::json reorder(const std::string& access_token,
                           const std::unordered_map<std::string, std::string>& params = {});
    // audio.delete
    nlohmann::json deleteAudio(const std::string& access_token,
                               const std::unordered_map<std::string, std::string>& params = {});
    // audio.addAlbum
    nlohmann::json addAlbum(const std::string& access_token,
                            const std::unordered_map<std::string, std::string>& params = {});
    // audio.deleteAlbum
    nlohmann::json deleteAlbum(const std::string& access_token,
                               const std::unordered_map<std::string, std::string>& params = {});
    // audio.edit
    nlohmann::json edit(const std::string& access_token,
                        const std::unordered_map<std::string, std::string>& params = {});
    // audio.editAlbum
    nlohmann::json editAlbum(const std::string& access_token,
                             const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // AUDIO_HPP
