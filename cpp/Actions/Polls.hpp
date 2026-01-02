#ifndef POLLS_HPP
#define POLLS_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Polls : public ActionInterface {
public:
    Polls(std::shared_ptr<VKApiRequest> request);

    nlohmann::json addVote(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json create(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteVote(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getBackgrounds(const std::string& access_token);
    nlohmann::json getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getPhotoUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getVoters(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json savePhoto(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // POLLS_HPP
