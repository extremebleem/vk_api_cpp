#ifndef TRANSLATIONS_HPP
#define TRANSLATIONS_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Translations : public ActionInterface {
public:
    Translations(std::shared_ptr<VKApiRequest> request);

    nlohmann::json translate(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // TRANSLATIONS_HPP