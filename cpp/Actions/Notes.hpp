#ifndef NOTES_HPP
#define NOTES_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Notes : public ActionInterface {
public:
    Notes(std::shared_ptr<VKApiRequest> request);

    nlohmann::json add(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json createComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteNote(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json restoreComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // NOTES_HPP
