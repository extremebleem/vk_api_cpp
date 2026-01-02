#ifndef MARKET_HPP
#define MARKET_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Market : public ActionInterface {
public:
    Market(std::shared_ptr<VKApiRequest> request);

    nlohmann::json add(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json addAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json addProperty(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json addPropertyVariant(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json addToAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json createComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json delete_(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteProperty(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deletePropertyVariant(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json edit(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editOrder(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editProperty(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json editPropertyVariant(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json filterCategories(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getAlbumById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getAlbums(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getCategories(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getFavesForAttach(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getGroupOrders(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getOrderById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getOrderItems(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getOrders(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getProductPhotoUploadServer(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getProperties(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json groupItems(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json removeFromAlbum(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json reorderAlbums(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json reorderItems(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json report(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json reportComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json restore(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json restoreComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json saveProductPhoto(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json saveProductPhotoBulk(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json search(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json searchItems(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json searchItemsBasic(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json ungroupItems(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // MARKET_HPP
