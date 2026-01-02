#ifndef USERS_HPP
#define USERS_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Users : public ActionInterface {
public:
    Users(std::shared_ptr<VKApiRequest> request);

    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getFollowers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getSubscriptions(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json report(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // USERS_HPP
