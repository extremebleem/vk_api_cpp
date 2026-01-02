#include "Messages.hpp"

Messages::Messages(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Messages::addChatUser(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.addChatUser", access_token, params);
}

nlohmann::json Messages::addChatUsers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.addChatUsers", access_token, params);
}

nlohmann::json Messages::allowMessagesFromGroup(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.allowMessagesFromGroup", access_token, params);
}

nlohmann::json Messages::createChat(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.createChat", access_token, params);
}

nlohmann::json Messages::delete_(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.delete", access_token, params);
}

nlohmann::json Messages::deleteChatPhoto(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.deleteChatPhoto", access_token, params);
}

nlohmann::json Messages::deleteConversation(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.deleteConversation", access_token, params);
}

nlohmann::json Messages::deleteReaction(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.deleteReaction", access_token, params);
}

nlohmann::json Messages::denyMessagesFromGroup(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.denyMessagesFromGroup", access_token, params);
}

nlohmann::json Messages::edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.edit", access_token, params);
}

nlohmann::json Messages::editChat(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.editChat", access_token, params);
}

nlohmann::json Messages::getByConversationMessageId(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.getByConversationMessageId", access_token, params);
}

nlohmann::json Messages::getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.getById", access_token, params);
}

nlohmann::json Messages::getChat(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.getChat", access_token, params);
}

nlohmann::json Messages::getChatPreview(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.getChatPreview", access_token, params);
}

nlohmann::json Messages::getConversationMembers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.getConversationMembers", access_token, params);
}

nlohmann::json Messages::getConversations(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.getConversations", access_token, params);
}

nlohmann::json Messages::getConversationsById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.getConversationsById", access_token, params);
}

nlohmann::json Messages::getHistory(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.getHistory", access_token, params);
}

nlohmann::json Messages::getHistoryAttachments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.getHistoryAttachments", access_token, params);
}

nlohmann::json Messages::getImportantMessages(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.getImportantMessages", access_token, params);
}

nlohmann::json Messages::getIntentUsers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.getIntentUsers", access_token, params);
}

nlohmann::json Messages::getInviteLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.getInviteLink", access_token, params);
}

nlohmann::json Messages::getLastActivity(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.getLastActivity", access_token, params);
}

nlohmann::json Messages::getLongPollHistory(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.getLongPollHistory", access_token, params);
}

nlohmann::json Messages::getLongPollServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.getLongPollServer", access_token, params);
}

nlohmann::json Messages::getMessagesReactions(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.getMessagesReactions", access_token, params);
}

nlohmann::json Messages::getReactedPeers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.getReactedPeers", access_token, params);
}

nlohmann::json Messages::getReactionsAssets(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.getReactionsAssets", access_token, params);
}

nlohmann::json Messages::isMessagesFromGroupAllowed(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.isMessagesFromGroupAllowed", access_token, params);
}

nlohmann::json Messages::joinChatByInviteLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.joinChatByInviteLink", access_token, params);
}

nlohmann::json Messages::markAsAnsweredConversation(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.markAsAnsweredConversation", access_token, params);
}

nlohmann::json Messages::markAsImportant(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.markAsImportant", access_token, params);
}

nlohmann::json Messages::markAsImportantConversation(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.markAsImportantConversation", access_token, params);
}

nlohmann::json Messages::markAsRead(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.markAsRead", access_token, params);
}

nlohmann::json Messages::markReactionsAsRead(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.markReactionsAsRead", access_token, params);
}

nlohmann::json Messages::muteChatMentions(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.muteChatMentions", access_token, params);
}

nlohmann::json Messages::pin(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.pin", access_token, params);
}

nlohmann::json Messages::removeChatUser(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.removeChatUser", access_token, params);
}

nlohmann::json Messages::restore(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.restore", access_token, params);
}

nlohmann::json Messages::search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.search", access_token, params);
}

nlohmann::json Messages::searchConversations(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.searchConversations", access_token, params);
}

nlohmann::json Messages::send(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.send", access_token, params);
}

nlohmann::json Messages::sendMessageEventAnswer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.sendMessageEventAnswer", access_token, params);
}

nlohmann::json Messages::sendReaction(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.sendReaction", access_token, params);
}

nlohmann::json Messages::setActivity(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.setActivity", access_token, params);
}

nlohmann::json Messages::setChatPhoto(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.setChatPhoto", access_token, params);
}

nlohmann::json Messages::unpin(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("messages.unpin", access_token, params);
}
