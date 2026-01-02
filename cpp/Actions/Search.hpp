#ifndef SEARCH_HPP
#define SEARCH_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Search : public ActionInterface {
public:
    Search(std::shared_ptr<VKApiRequest> request);

    nlohmann::json getHints(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // SEARCH_HPP
