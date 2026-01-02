#ifndef CALLS_HPP
#define CALLS_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Calls : public ActionInterface {
public:
    Calls(std::shared_ptr<VKApiRequest> request);

    nlohmann::json forceFinish(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json start(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // CALLS_HPP