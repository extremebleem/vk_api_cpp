#include "Ads.hpp"

Ads::Ads(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Ads::addOfficeUsers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.addOfficeUsers", access_token, params);
}

nlohmann::json Ads::checkLink(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.checkLink", access_token, params);
}

nlohmann::json Ads::createAds(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.createAds", access_token, params);
}

nlohmann::json Ads::createCampaigns(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.createCampaigns", access_token, params);
}

nlohmann::json Ads::createClients(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.createClients", access_token, params);
}

nlohmann::json Ads::createLookalikeRequest(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.createLookalikeRequest", access_token, params);
}

nlohmann::json Ads::createTargetGroup(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.createTargetGroup", access_token, params);
}

nlohmann::json Ads::createTargetPixel(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.createTargetPixel", access_token, params);
}

nlohmann::json Ads::deleteAds(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.deleteAds", access_token, params);
}

nlohmann::json Ads::deleteCampaigns(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.deleteCampaigns", access_token, params);
}

nlohmann::json Ads::deleteClients(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.deleteClients", access_token, params);
}

nlohmann::json Ads::deleteTargetGroup(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.deleteTargetGroup", access_token, params);
}

nlohmann::json Ads::deleteTargetPixel(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.deleteTargetPixel", access_token, params);
}

nlohmann::json Ads::getAccounts(const std::string& access_token) {
    return request_->post("ads.getAccounts", access_token);
}

nlohmann::json Ads::getAds(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getAds", access_token, params);
}

nlohmann::json Ads::getAdsLayout(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getAdsLayout", access_token, params);
}

nlohmann::json Ads::getAdsTargeting(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getAdsTargeting", access_token, params);
}

nlohmann::json Ads::getBudget(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getBudget", access_token, params);
}

nlohmann::json Ads::getCampaigns(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getCampaigns", access_token, params);
}

nlohmann::json Ads::getCategories(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getCategories", access_token, params);
}

nlohmann::json Ads::getClients(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getClients", access_token, params);
}

nlohmann::json Ads::getDemographics(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getDemographics", access_token, params);
}

nlohmann::json Ads::getFloodStats(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getFloodStats", access_token, params);
}

nlohmann::json Ads::getLookalikeRequests(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getLookalikeRequests", access_token, params);
}

nlohmann::json Ads::getMusicians(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getMusicians", access_token, params);
}

nlohmann::json Ads::getMusiciansByIds(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getMusiciansByIds", access_token, params);
}

nlohmann::json Ads::getOfficeUsers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getOfficeUsers", access_token, params);
}

nlohmann::json Ads::getPostsReach(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getPostsReach", access_token, params);
}

nlohmann::json Ads::getRejectionReason(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getRejectionReason", access_token, params);
}

nlohmann::json Ads::getStatistics(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getStatistics", access_token, params);
}

nlohmann::json Ads::getSuggestions(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getSuggestions", access_token, params);
}

nlohmann::json Ads::getTargetGroups(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getTargetGroups", access_token, params);
}

nlohmann::json Ads::getTargetPixels(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getTargetPixels", access_token, params);
}

nlohmann::json Ads::getTargetingStats(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getTargetingStats", access_token, params);
}

nlohmann::json Ads::getUploadURL(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.getUploadURL", access_token, params);
}

nlohmann::json Ads::getVideoUploadURL(const std::string& access_token) {
    return request_->post("ads.getVideoUploadURL", access_token);
}

nlohmann::json Ads::importTargetContacts(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.importTargetContacts", access_token, params);
}

nlohmann::json Ads::removeOfficeUsers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.removeOfficeUsers", access_token, params);
}

nlohmann::json Ads::removeTargetContacts(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.removeTargetContacts", access_token, params);
}

nlohmann::json Ads::saveLookalikeRequestResult(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.saveLookalikeRequestResult", access_token, params);
}

nlohmann::json Ads::shareTargetGroup(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.shareTargetGroup", access_token, params);
}

nlohmann::json Ads::updateAds(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.updateAds", access_token, params);
}

nlohmann::json Ads::updateCampaigns(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.updateCampaigns", access_token, params);
}

nlohmann::json Ads::updateClients(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.updateClients", access_token, params);
}

nlohmann::json Ads::updateOfficeUsers(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.updateOfficeUsers", access_token, params);
}

nlohmann::json Ads::updateTargetGroup(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.updateTargetGroup", access_token, params);
}

nlohmann::json Ads::updateTargetPixel(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("ads.updateTargetPixel", access_token, params);
}
