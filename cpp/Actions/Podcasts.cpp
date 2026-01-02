#include "Podcasts.hpp"

Podcasts::Podcasts(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Podcasts::searchPodcast(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("podcasts.searchPodcast", access_token, params);
}
