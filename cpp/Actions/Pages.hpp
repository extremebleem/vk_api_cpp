#ifndef PAGES_HPP
#define PAGES_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Pages : public ActionInterface {
public:
    Pages(std::shared_ptr<VKApiRequest> request);

    nlohmann::json clearCache(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getHistory(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getVersion(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json parseWiki(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json save(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json saveAccess(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // PAGES_HPP
