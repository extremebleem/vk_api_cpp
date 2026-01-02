#ifndef AUTH_HPP
#define AUTH_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Auth : public ActionInterface {
public:
    Auth(std::shared_ptr<VKApiRequest> request);

    nlohmann::json restore(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // AUTH_HPP
