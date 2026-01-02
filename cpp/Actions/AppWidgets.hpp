#ifndef APPWIDGETS_HPP
#define APPWIDGETS_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include "nlohmann/json.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class AppWidgets : public ActionInterface {
public:
    AppWidgets(std::shared_ptr<VKApiRequest> request);

    nlohmann::json getAppImageUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getAppImages(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getGroupImageUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getGroupImages(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getImagesById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json saveAppImage(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json saveGroupImage(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json update(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // APPWIDGETS_HPP
