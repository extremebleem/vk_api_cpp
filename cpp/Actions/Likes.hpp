#ifndef LIKES_HPP
#define LIKES_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Likes : public ActionInterface {
public:
    Likes(std::shared_ptr<VKApiRequest> request);

    nlohmann::json add(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json delete_(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getList(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json isLiked(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // LIKES_HPP
