#ifndef DATABASE_HPP
#define DATABASE_HPP

#include "../ActionInterface.hpp"
#include "../VKApiRequest.hpp"
#include <unordered_map>
#include <string>
#include <memory>

class Database : public ActionInterface {
public:
    Database(std::shared_ptr<VKApiRequest> request);

    nlohmann::json getChairs(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getCities(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getCitiesById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getCountries(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getCountriesById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getFaculties(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getMetroStations(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getMetroStationsById(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getRegions(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getSchoolClasses(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getSchools(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});
    nlohmann::json getUniversities(const std::string& access_token, const std::unordered_map<std::string, std::string>& params = {});

private:
    std::shared_ptr<VKApiRequest> request_;
};

#endif // DATABASE_HPP