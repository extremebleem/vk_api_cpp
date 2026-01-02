#include "Groups.hpp"

Groups::Groups(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Groups::addAddress(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.addAddress", access_token, params);
}

nlohmann::json Groups::addCallbackServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.addCallbackServer", access_token, params);
}

nlohmann::json Groups::addLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.addLink", access_token, params);
}

nlohmann::json Groups::approveRequest(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.approveRequest", access_token, params);
}

nlohmann::json Groups::ban(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.ban", access_token, params);
}

nlohmann::json Groups::create(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.create", access_token, params);
}

nlohmann::json Groups::deleteAddress(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.deleteAddress", access_token, params);
}

nlohmann::json Groups::deleteCallbackServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.deleteCallbackServer", access_token, params);
}

nlohmann::json Groups::deleteLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.deleteLink", access_token, params);
}

nlohmann::json Groups::disableOnline(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.disableOnline", access_token, params);
}

nlohmann::json Groups::edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.edit", access_token, params);
}

nlohmann::json Groups::editAddress(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.editAddress", access_token, params);
}

nlohmann::json Groups::editCallbackServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.editCallbackServer", access_token, params);
}

nlohmann::json Groups::editLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.editLink", access_token, params);
}

nlohmann::json Groups::editManager(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.editManager", access_token, params);
}

nlohmann::json Groups::enableOnline(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.enableOnline", access_token, params);
}

nlohmann::json Groups::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.get", access_token, params);
}

nlohmann::json Groups::getAddresses(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.getAddresses", access_token, params);
}

nlohmann::json Groups::getBanned(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.getBanned", access_token, params);
}

nlohmann::json Groups::getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.getById", access_token, params);
}

nlohmann::json Groups::getCallbackConfirmationCode(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.getCallbackConfirmationCode", access_token, params);
}

nlohmann::json Groups::getCallbackServers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.getCallbackServers", access_token, params);
}

nlohmann::json Groups::getCallbackSettings(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.getCallbackSettings", access_token, params);
}

nlohmann::json Groups::getCatalogInfo(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.getCatalogInfo", access_token, params);
}

nlohmann::json Groups::getInvitedUsers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.getInvitedUsers", access_token, params);
}

nlohmann::json Groups::getInvites(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.getInvites", access_token, params);
}

nlohmann::json Groups::getLongPollServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.getLongPollServer", access_token, params);
}

nlohmann::json Groups::getLongPollSettings(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.getLongPollSettings", access_token, params);
}

nlohmann::json Groups::getMembers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.getMembers", access_token, params);
}

nlohmann::json Groups::getOnlineStatus(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.getOnlineStatus", access_token, params);
}

nlohmann::json Groups::getRequests(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.getRequests", access_token, params);
}

nlohmann::json Groups::getSettings(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.getSettings", access_token, params);
}

nlohmann::json Groups::getTagList(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.getTagList", access_token, params);
}

nlohmann::json Groups::getTokenPermissions(const std::string& access_token) {
    return request_->post("groups.getTokenPermissions", access_token);
}

nlohmann::json Groups::invite(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.invite", access_token, params);
}

nlohmann::json Groups::isMember(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.isMember", access_token, params);
}

nlohmann::json Groups::join(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.join", access_token, params);
}

nlohmann::json Groups::leave(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.leave", access_token, params);
}

nlohmann::json Groups::removeUser(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.removeUser", access_token, params);
}

nlohmann::json Groups::reorderLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.reorderLink", access_token, params);
}

nlohmann::json Groups::search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.search", access_token, params);
}

nlohmann::json Groups::setCallbackSettings(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.setCallbackSettings", access_token, params);
}

nlohmann::json Groups::setLongPollSettings(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.setLongPollSettings", access_token, params);
}

nlohmann::json Groups::setSettings(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.setSettings", access_token, params);
}

nlohmann::json Groups::setUserNote(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.setUserNote", access_token, params);
}

nlohmann::json Groups::tagAdd(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.tagAdd", access_token, params);
}

nlohmann::json Groups::tagBind(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.tagBind", access_token, params);
}

nlohmann::json Groups::tagDelete(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.tagDelete", access_token, params);
}

nlohmann::json Groups::tagUpdate(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.tagUpdate", access_token, params);
}

nlohmann::json Groups::toggleMarket(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.toggleMarket", access_token, params);
}

nlohmann::json Groups::unban(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("groups.unban", access_token, params);
}
