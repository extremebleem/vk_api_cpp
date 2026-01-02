#ifndef FAVE_HPP
#define FAVE_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Fave : public ActionInterface {
public:
    Fave(std::shared_ptr<VKApiRequest> request);

    nlohmann::json addArticle(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json addLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json addPage(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json addPost(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json addProduct(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json addTag(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json addVideo(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editTag(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getPages(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getTags(const std::string& access_token);
    nlohmann::json markSeen(const std::string& access_token);
    nlohmann::json removeArticle(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json removeLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json removePage(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json removePost(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json removeProduct(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json removeTag(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json removeVideo(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json reorderTags(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json setPageTags(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json setTags(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json trackPageInteraction(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // FAVE_HPP
