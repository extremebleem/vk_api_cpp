#ifndef WIDGETS_HPP
#define WIDGETS_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Widgets : public ActionInterface {
public:
    Widgets(std::shared_ptr<VKApiRequest> request);

    nlohmann::json getComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getPages(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // WIDGETS_HPP
