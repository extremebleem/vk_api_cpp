#ifndef NEWSFEED_HPP
#define NEWSFEED_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Newsfeed : public ActionInterface {
public:
    Newsfeed(std::shared_ptr<VKApiRequest> request);

    nlohmann::json addBan(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteBan(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteList(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getBanned(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getLists(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getMentions(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getRecommended(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getSuggestedSources(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json ignoreItem(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json saveList(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json unignoreItem(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json unsubscribe(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // NEWSFEED_HPP
