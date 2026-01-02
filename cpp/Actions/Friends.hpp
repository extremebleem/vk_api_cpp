#ifndef FRIENDS_HPP
#define FRIENDS_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Friends : public ActionInterface {
public:
    Friends(std::shared_ptr<VKApiRequest> request);

    nlohmann::json add(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json addList(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json areFriends(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json delete_(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteAllRequests(const std::string& access_token);
    nlohmann::json deleteList(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editList(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getAppUsers(const std::string& access_token);
    nlohmann::json getLists(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getMutual(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getOnline(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getRecent(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getRequests(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getSuggestions(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // FRIENDS_HPP
