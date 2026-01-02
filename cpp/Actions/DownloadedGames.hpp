#ifndef DOWNLOADEDGAMES_HPP
#define DOWNLOADEDGAMES_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class DownloadedGames : public ActionInterface {
public:
    DownloadedGames(std::shared_ptr<VKApiRequest> request);

    nlohmann::json getPaidStatus(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // DOWNLOADEDGAMES_HPP
