#ifndef SECURE_HPP
#define SECURE_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Secure : public ActionInterface {
public:
    Secure(std::shared_ptr<VKApiRequest> request);

    nlohmann::json addAppEvent(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json checkToken(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getAppBalance(const std::string& access_token);
    nlohmann::json getSMSHistory(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getTransactionsHistory(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getUserLevel(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json giveEventSticker(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json sendNotification(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json sendSMSNotification(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json setCounter(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // SECURE_HPP
