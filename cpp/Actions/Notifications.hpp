#ifndef NOTIFICATIONS_HPP
#define NOTIFICATIONS_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Notifications : public ActionInterface {
public:
    Notifications(std::shared_ptr<VKApiRequest> request);

    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json markAsViewed(const std::string& access_token);
    nlohmann::json sendMessage(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // NOTIFICATIONS_HPP
