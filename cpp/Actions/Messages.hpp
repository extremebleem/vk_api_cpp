#ifndef MESSAGES_HPP
#define MESSAGES_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Messages : public ActionInterface {
public:
    Messages(std::shared_ptr<VKApiRequest> request);

    nlohmann::json addChatUser(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json addChatUsers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json allowMessagesFromGroup(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json createChat(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json delete_(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteChatPhoto(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteConversation(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteReaction(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json denyMessagesFromGroup(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editChat(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getByConversationMessageId(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getChat(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getChatPreview(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getConversationMembers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getConversations(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getConversationsById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getHistory(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getHistoryAttachments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getImportantMessages(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getIntentUsers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getInviteLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getLastActivity(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getLongPollHistory(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getLongPollServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getMessagesReactions(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getReactedPeers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getReactionsAssets(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json isMessagesFromGroupAllowed(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json joinChatByInviteLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json markAsAnsweredConversation(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json markAsImportant(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json markAsImportantConversation(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json markAsRead(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json markReactionsAsRead(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json muteChatMentions(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json pin(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json removeChatUser(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json restore(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json searchConversations(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json send(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json sendMessageEventAnswer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json sendReaction(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json setActivity(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json setChatPhoto(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json unpin(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // MESSAGES_HPP
