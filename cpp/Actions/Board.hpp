#ifndef BOARD_HPP
#define BOARD_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Board : public ActionInterface {
public:
    Board(std::shared_ptr<VKApiRequest> request);

    nlohmann::json addTopic(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json closeTopic(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json createComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteTopic(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editTopic(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json fixTopic(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getTopics(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json openTopic(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json restoreComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json unfixTopic(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // BOARD_HPP
