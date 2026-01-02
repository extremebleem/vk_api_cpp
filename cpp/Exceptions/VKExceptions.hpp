#ifndef VKEXCEPTIONS_HPP
#define VKEXCEPTIONS_HPP

#include <stdexcept>
#include <string>

class VKException : public std::runtime_error {
public:
    explicit VKException(const std::string& message) : std::runtime_error(message) {}
};

class VKClientException : public VKException {
public:
    explicit VKClientException(const std::string& message) : VKException(message) {}
};

class VKApiException : public VKException {
private:
    int error_code_;
    
public:
    VKApiException(int error_code, const std::string& message) 
        : VKException(message), error_code_(error_code) {}
    
    int getErrorCode() const { return error_code_; }
};

class VKOAuthException : public VKException {
public:
    explicit VKOAuthException(const std::string& message) : VKException(message) {}
};

#endif // VKEXCEPTIONS_HPP