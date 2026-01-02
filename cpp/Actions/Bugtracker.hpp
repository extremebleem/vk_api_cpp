#ifndef BUGTRACKER_HPP
#define BUGTRACKER_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include "nlohmann/json.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Bugtracker : public ActionInterface {
public:
    Bugtracker(std::shared_ptr<VKApiRequest> request);

    nlohmann::json addCompanyGroupsMembers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json addCompanyMembers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json changeBugreportStatus(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json createComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getBugreportById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getCompanyGroupMembers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getCompanyMembers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getDownloadVersionUrl(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getProductBuildUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json removeCompanyGroupMember(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json removeCompanyMember(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json saveProductVersion(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json setCompanyMemberRole(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json setProductIsOver(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // BUGTRACKER_HPP
