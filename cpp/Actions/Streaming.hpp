#ifndef STREAMING_HPP
#define STREAMING_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Streaming : public ActionInterface {
public:
    Streaming(std::shared_ptr<VKApiRequest> request);

    nlohmann::json getServerUrl(const std::string& access_token);
    nlohmann::json getStats(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getStem(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // STREAMING_HPP