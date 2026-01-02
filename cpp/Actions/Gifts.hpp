#ifndef GIFTS_HPP
#define GIFTS_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Gifts : public ActionInterface {
public:
    Gifts(std::shared_ptr<VKApiRequest> request);

    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // GIFTS_HPP