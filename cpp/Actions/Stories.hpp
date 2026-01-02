#ifndef STORIES_HPP
#define STORIES_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Stories : public ActionInterface {
public:
    Stories(std::shared_ptr<VKApiRequest> request);

    nlohmann::json banOwner(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    //nlohmann::json delete(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getBanned(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getPhotoUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getReplies(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getStats(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getVideoUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getViewers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json hideAllReplies(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json hideReply(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json save(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json sendInteraction(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json unbanOwner(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // STORIES_HPP
