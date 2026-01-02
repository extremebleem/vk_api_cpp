#ifndef GROUPOAUTH_HPP
#define GROUPOAUTH_HPP

#include "AbstractOAuth.hpp"
#include <unordered_map>

class GroupOAuth : public AbstractOAuth {
public:
    static const std::string VERSION;
    static const std::string HOST;
    static const std::string ENDPOINT_AUTHORIZE;
    static const std::string ENDPOINT_ACCESS_TOKEN;

    GroupOAuth();

    const std::string& getVersion() const;
    void setVersion(const std::string& version);

    std::string getAuthorizeUrl(const std::unordered_map<std::string, std::string>& params);
    nlohmann::json getAccessToken(const std::unordered_map<std::string, std::string>& params);

private:
    std::string version_;
    std::string buildQuery(const std::unordered_map<std::string, std::string>& params);
};

#endif // GROUPOAUTH_HPP