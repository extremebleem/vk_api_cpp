#ifndef DOCS_HPP
#define DOCS_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include "../nlohmann/json.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Docs : public ActionInterface {
public:
    Docs(std::shared_ptr<VKApiRequest> request);

    nlohmann::json add(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json delete_(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getMessagesUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getTypes(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getWallUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json restore(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json save(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // DOCS_HPP
