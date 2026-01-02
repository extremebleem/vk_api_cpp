#ifndef LEADFORMS_HPP
#define LEADFORMS_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class LeadForms : public ActionInterface {
public:
    LeadForms(std::shared_ptr<VKApiRequest> request);

    nlohmann::json create(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    //nlohmann::json delete(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getLeads(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getUploadURL(const std::string& access_token);
    nlohmann::json list(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json update(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // LEADFORMS_HPP