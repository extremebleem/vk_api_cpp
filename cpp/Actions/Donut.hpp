#ifndef DONUT_HPP
#define DONUT_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include "../nlohmann/json.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Donut : public ActionInterface {
public:
    Donut(std::shared_ptr<VKApiRequest> request);

    nlohmann::json getFriends(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getSubscription(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getSubscriptions(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json isDon(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // DONUT_HPP
