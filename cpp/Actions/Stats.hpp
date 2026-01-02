#ifndef STATS_HPP
#define STATS_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Stats : public ActionInterface {
public:
    Stats(std::shared_ptr<VKApiRequest> request);

    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getPostReach(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json trackVisitor(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // STATS_HPP