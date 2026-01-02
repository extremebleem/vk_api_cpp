#ifndef ADS_HPP
#define ADS_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Ads : public ActionInterface {
public:
    Ads(std::shared_ptr<VKApiRequest> request);

    nlohmann::json addOfficeUsers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json checkLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json createAds(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json createCampaigns(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json createClients(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json createLookalikeRequest(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json createTargetGroup(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json createTargetPixel(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteAds(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteCampaigns(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteClients(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteTargetGroup(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json deleteTargetPixel(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getAccounts(const std::string& access_token);
    nlohmann::json getAds(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getAdsLayout(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getAdsTargeting(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getBudget(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getCampaigns(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getCategories(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getClients(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getDemographics(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getFloodStats(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getLookalikeRequests(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getMusicians(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getMusiciansByIds(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getOfficeUsers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getPostsReach(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getRejectionReason(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getStatistics(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getSuggestions(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getTargetGroups(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getTargetPixels(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getTargetingStats(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getUploadURL(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getVideoUploadURL(const std::string& access_token);
    nlohmann::json importTargetContacts(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json removeOfficeUsers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json removeTargetContacts(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json saveLookalikeRequestResult(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json shareTargetGroup(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json updateAds(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json updateCampaigns(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json updateClients(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json updateOfficeUsers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json updateTargetGroup(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json updateTargetPixel(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // ADS_HPP
