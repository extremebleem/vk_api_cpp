#ifndef PODCASTS_HPP
#define PODCASTS_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Podcasts : public ActionInterface {
public:
    Podcasts(std::shared_ptr<VKApiRequest> request);

    nlohmann::json searchPodcast(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // PODCASTS_HPP
