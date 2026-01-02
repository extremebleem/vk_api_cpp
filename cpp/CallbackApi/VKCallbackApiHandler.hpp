#ifndef VKCALLBACKAPIHANDLER_HPP
#define VKCALLBACKAPIHANDLER_HPP

#include <string>
#include <nlohmann/json.hpp>

class VKCallbackApiHandler {
public:
    static const std::string AUDIO_NEW;
    static const std::string BOARD_POST_NEW;
    static const std::string BOARD_POST_EDIT;
    static const std::string BOARD_POST_RESTORE;
    static const std::string BOARD_POST_DELETE;
    static const std::string CONFIRMATION;
    static const std::string GROUP_LEAVE;
    static const std::string GROUP_JOIN;
    static const std::string GROUP_CHANGE_PHOTO;
    static const std::string GROUP_CHANGE_SETTINGS;
    static const std::string GROUP_OFFICERS_EDIT;
    static const std::string LEAD_FORMS_NEW;
    static const std::string MARKET_COMMENT_NEW;
    static const std::string MARKET_COMMENT_DELETE;
    static const std::string MARKET_COMMENT_EDIT;
    static const std::string MARKET_COMMENT_RESTORE;
    static const std::string MARKET_ORDER_NEW;
    static const std::string MARKET_ORDER_EDIT;
    static const std::string MESSAGE_NEW;
    static const std::string MESSAGE_REPLY;
    static const std::string MESSAGE_EDIT;
    static const std::string MESSAGE_ALLOW;
    static const std::string MESSAGE_DENY;
    static const std::string MESSAGE_READ;
    static const std::string MESSAGE_TYPING_STATE;
    static const std::string MESSAGES_EDIT;
    static const std::string MESSAGE_REACTION_EVENT;
    static const std::string PHOTO_NEW;
    static const std::string PHOTO_COMMENT_NEW;
    static const std::string PHOTO_COMMENT_DELETE;
    static const std::string PHOTO_COMMENT_EDIT;
    static const std::string PHOTO_COMMENT_RESTORE;
    static const std::string POLL_VOTE_NEW;
    static const std::string USER_BLOCK;
    static const std::string USER_UNBLOCK;
    static const std::string VIDEO_NEW;
    static const std::string VIDEO_COMMENT_NEW;
    static const std::string VIDEO_COMMENT_DELETE;
    static const std::string VIDEO_COMMENT_EDIT;
    static const std::string VIDEO_COMMENT_RESTORE;
    static const std::string WALL_POST_NEW;
    static const std::string WALL_REPLY_NEW;
    static const std::string WALL_REPLY_EDIT;
    static const std::string WALL_REPLY_DELETE;
    static const std::string WALL_REPLY_RESTORE;
    static const std::string WALL_REPOST;
    static const std::string WALL_SCHEDULE_POST_NEW;
    static const std::string WALL_SCHEDULE_POST_DELETE;

    virtual ~VKCallbackApiHandler() = default;

    virtual void audioNew(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void boardPostNew(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void boardPostEdit(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void boardPostRestore(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void boardPostDelete(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void confirmation(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void groupLeave(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void groupJoin(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void groupChangePhoto(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void groupChangeSettings(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void groupOfficersEdit(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void leadFormsNew(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void marketCommentNew(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void marketCommentDelete(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void marketCommentEdit(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void marketCommentRestore(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void marketOrderNew(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void marketOrderEdit(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void messageNew(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void messageReply(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void messageEdit(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void messageAllow(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void messageDeny(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void messageRead(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void messageTypingState(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void messagesEdit(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void messageReactionEvent(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void photoNew(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void photoCommentNew(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void photoCommentDelete(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void photoCommentEdit(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void photoCommentRestore(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void pollVoteNew(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void userBlock(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void userUnblock(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void videoNew(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void videoCommentNew(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void videoCommentDelete(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void videoCommentEdit(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void videoCommentRestore(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void wallPostNew(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void wallReplyNew(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void wallReplyEdit(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void wallReplyDelete(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void wallReplyRestore(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void wallRepost(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void wallSchedulePostNew(int group_id, const std::string* secret, const nlohmann::json& object) {}
    virtual void wallSchedulePostDelete(int group_id, const std::string* secret, const nlohmann::json& object) {}

    void parseObject(int group_id, const std::string* secret, const std::string& type, const nlohmann::json& object);
};

#endif // VKCALLBACKAPIHANDLER_HPP