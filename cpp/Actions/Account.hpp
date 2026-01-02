#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Account : public ActionInterface {
public:
    Account(std::shared_ptr<VKApiRequest> request);

    nlohmann::json ban(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json changePassword(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getActiveOffers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getAppPermissions(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getBanned(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getCounters(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getInfo(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getProfileInfo(const std::string& access_token);
    nlohmann::json getPushSettings(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json registerDevice(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json saveProfileInfo(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json setInfo(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json setOffline(const std::string& access_token);
    nlohmann::json setOnline(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json setPushSettings(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json setSilenceMode(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json unban(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json unregisterDevice(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // ACCOUNT_HPP
