#ifndef VKAPICLIENT_HPP
#define VKAPICLIENT_HPP

#include "VKApiRequest.hpp"
#include "ActionInterface.hpp"
#include <string>
#include <memory>
#include <unordered_map>
#include <algorithm>

class VKApiClient {
public:
    static const std::string API_VERSION;
    static const std::string API_HOST;

    VKApiClient(const std::string& api_version = API_VERSION, const std::string& language = "en");

    std::shared_ptr<VKApiRequest> getRequest() const;
    std::shared_ptr<ActionInterface> getAction(const std::string& name);

private:
    std::shared_ptr<VKApiRequest> request_;
    std::unordered_map<std::string, std::shared_ptr<ActionInterface>> instances_;
};

#endif // VKAPICLIENT_HPP