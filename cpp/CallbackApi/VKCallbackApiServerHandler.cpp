#include "VKCallbackApiServerHandler.hpp"

const std::string VKCallbackApiServerHandler::EVENT_KEY_TYPE = "type";
const std::string VKCallbackApiServerHandler::EVENT_KEY_OBJECT = "object";
const std::string VKCallbackApiServerHandler::EVENT_KEY_SECRET = "secret";
const std::string VKCallbackApiServerHandler::EVENT_KEY_GROUP_ID = "group_id";
const std::string VKCallbackApiServerHandler::CALLBACK_EVENT_CONFIRMATION = "confirmation";

void VKCallbackApiServerHandler::parse(const nlohmann::json& event) {
    std::string type = event[EVENT_KEY_TYPE].get<std::string>();
    int group_id = event[EVENT_KEY_GROUP_ID].get<int>();
    
    const std::string* secret = nullptr;
    std::string secret_str;
    if (event.contains(EVENT_KEY_SECRET) && !event[EVENT_KEY_SECRET].is_null()) {
        secret_str = event[EVENT_KEY_SECRET].get<std::string>();
        secret = &secret_str;
    }
    
    if (type == CALLBACK_EVENT_CONFIRMATION) {
        confirmation(group_id, secret);
    } else {
        parseObject(group_id, secret, type, event[EVENT_KEY_OBJECT]);
    }
}