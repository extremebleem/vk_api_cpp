#include "DownloadedGames.hpp"

DownloadedGames::DownloadedGames(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json DownloadedGames::getPaidStatus(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("downloadedGames.getPaidStatus", access_token, params);
}
