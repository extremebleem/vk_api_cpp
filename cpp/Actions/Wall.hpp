#ifndef WALL_HPP
#define WALL_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Wall : public ActionInterface {
public:
    Wall(std::shared_ptr<VKApiRequest> request);

    nlohmann::json checkCopyrightLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json closeComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json createComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deletePost(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editAdsStealth(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getReposts(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json openComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json parseAttachedLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json pin(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json post(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json postAdsStealth(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json reportComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json reportPost(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json repost(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json restore(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json restoreComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json unpin(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // WALL_HPP
