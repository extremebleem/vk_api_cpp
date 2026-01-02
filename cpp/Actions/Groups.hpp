#ifndef GROUPS_HPP
#define GROUPS_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Groups : public ActionInterface {
public:
    Groups(std::shared_ptr<VKApiRequest> request);

    nlohmann::json addAddress(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json addCallbackServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json addLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json approveRequest(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json ban(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json create(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteAddress(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteCallbackServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json disableOnline(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editAddress(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editCallbackServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editManager(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json enableOnline(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getAddresses(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getBanned(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getCallbackConfirmationCode(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getCallbackServers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getCallbackSettings(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getCatalogInfo(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getInvitedUsers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getInvites(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getLongPollServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getLongPollSettings(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getMembers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getOnlineStatus(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getRequests(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getSettings(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getTagList(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getTokenPermissions(const std::string& access_token);
    nlohmann::json invite(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json isMember(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json join(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json leave(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json removeUser(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json reorderLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json setCallbackSettings(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json setLongPollSettings(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json setSettings(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json setUserNote(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json tagAdd(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json tagBind(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json tagDelete(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json tagUpdate(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json toggleMarket(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json unban(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // GROUPS_HPP
