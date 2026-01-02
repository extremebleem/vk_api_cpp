#ifndef ORDERS_HPP
#define ORDERS_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Orders : public ActionInterface {
public:
    Orders(std::shared_ptr<VKApiRequest> request);

    nlohmann::json cancelSubscription(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json changeState(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getAmount(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getUserSubscriptionById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getUserSubscriptions(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // ORDERS_HPP
