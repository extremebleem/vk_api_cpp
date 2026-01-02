#include "Database.hpp"

Database::Database(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Database::getChairs(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("database.getChairs", access_token, params);
}

nlohmann::json Database::getCities(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("database.getCities", access_token, params);
}

nlohmann::json Database::getCitiesById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("database.getCitiesById", access_token, params);
}

nlohmann::json Database::getCountries(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("database.getCountries", access_token, params);
}

nlohmann::json Database::getCountriesById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("database.getCountriesById", access_token, params);
}

nlohmann::json Database::getFaculties(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("database.getFaculties", access_token, params);
}

nlohmann::json Database::getMetroStations(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("database.getMetroStations", access_token, params);
}

nlohmann::json Database::getMetroStationsById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("database.getMetroStationsById", access_token, params);
}

nlohmann::json Database::getRegions(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("database.getRegions", access_token, params);
}

nlohmann::json Database::getSchoolClasses(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("database.getSchoolClasses", access_token, params);
}

nlohmann::json Database::getSchools(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("database.getSchools", access_token, params);
}

nlohmann::json Database::getUniversities(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("database.getUniversities", access_token, params);
}
