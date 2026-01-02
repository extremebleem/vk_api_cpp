#ifndef VKCALLBACKAPISERVERHANDLER_HPP
#define VKCALLBACKAPISERVERHANDLER_HPP

#include "VKCallbackApiHandler.hpp"
#include <nlohmann/json.hpp>

class VKCallbackApiServerHandler : public VKCallbackApiHandler {
public:
    static const std::string EVENT_KEY_TYPE;
    static const std::string EVENT_KEY_OBJECT;
    static const std::string EVENT_KEY_SECRET;
    static const std::string EVENT_KEY_GROUP_ID;
    static const std::string CALLBACK_EVENT_CONFIRMATION;

    virtual void confirmation(int group_id, const std::string* secret) = 0;
    void parse(const nlohmann::json& event);
};

#endif // VKCALLBACKAPISERVERHANDLER_HPP