#ifndef EXECUTE_HPP
#define EXECUTE_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Execute : public ActionInterface {
public:
    Execute(std::shared_ptr<VKApiRequest> request);

    nlohmann::json execute(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // EXECUTE_HPP
