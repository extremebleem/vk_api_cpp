#ifndef STORE_HPP
#define STORE_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Store : public ActionInterface {
public:
    Store(std::shared_ptr<VKApiRequest> request);

    nlohmann::json addStickersToFavorite(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getFavoriteStickers(const std::string& access_token);
    nlohmann::json getProducts(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getStickersKeywords(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json removeStickersFromFavorite(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // STORE_HPP
