#ifndef APPS_HPP
#define APPS_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Apps : public ActionInterface {
public:
    Apps(std::shared_ptr<VKApiRequest> request);

    nlohmann::json addSnippet(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json addUsersToTestingGroup(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteAppRequests(const std::string& access_token);
    nlohmann::json deleteSnippet(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getCatalog(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getFriendsList(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getLeaderboard(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getMiniAppPolicies(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getScopes(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getScore(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getSnippets(const std::string& access_token);
    nlohmann::json getTestingGroups(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json isNotificationsAllowed(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json promoHasActiveGift(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json promoUseGift(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json removeTestingGroup(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json removeUsersFromTestingGroups(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json sendRequest(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json updateMetaForTestingGroup(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // APPS_HPP
