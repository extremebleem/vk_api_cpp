#ifndef UTILS_HPP
#define UTILS_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Utils : public ActionInterface {
public:
    Utils(std::shared_ptr<VKApiRequest> request);

    nlohmann::json checkLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteFromLastShortened(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getLastShortenedLinks(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getLinkStats(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getServerTime(const std::string& access_token);
    nlohmann::json getShortLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json resolveScreenName(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // UTILS_HPP