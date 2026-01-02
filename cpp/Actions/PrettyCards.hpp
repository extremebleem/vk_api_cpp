#ifndef PRETTYCARDS_HPP
#define PRETTYCARDS_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class PrettyCards : public ActionInterface {
public:
    PrettyCards(std::shared_ptr<VKApiRequest> request);

    nlohmann::json create(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json delete_(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getUploadURL(const std::string& access_token);

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // PRETTYCARDS_HPP
