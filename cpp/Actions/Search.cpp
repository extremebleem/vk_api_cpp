#include "Search.hpp"

Search::Search(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Search::getHints(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("search.getHints", access_token, params);
}
