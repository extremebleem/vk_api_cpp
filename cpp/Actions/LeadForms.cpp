#include "LeadForms.hpp"

LeadForms::LeadForms(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json LeadForms::create(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("leadForms.create", access_token, params);
}

// nlohmann::json LeadForms::delete(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
//     return request_->post("leadForms.delete", access_token, params);
// }

nlohmann::json LeadForms::get(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("leadForms.get", access_token, params);
}

nlohmann::json LeadForms::getLeads(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("leadForms.getLeads", access_token, params);
}

nlohmann::json LeadForms::getUploadURL(const std::string& access_token) {
    return request_->post("leadForms.getUploadURL", access_token);
}

nlohmann::json LeadForms::list(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("leadForms.list", access_token, params);
}

nlohmann::json LeadForms::update(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("leadForms.update", access_token, params);
}
