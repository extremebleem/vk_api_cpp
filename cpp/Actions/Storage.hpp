#ifndef STORAGE_HPP
#define STORAGE_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Storage : public ActionInterface {
public:
    Storage(std::shared_ptr<VKApiRequest> request);

    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getKeys(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json set(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // STORAGE_HPP
