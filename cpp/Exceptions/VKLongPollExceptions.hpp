#ifndef VKLONGPOLLEXCEPTIONS_HPP
#define VKLONGPOLLEXCEPTIONS_HPP

#include "VKExceptions.hpp"

class VKLongPollServerKeyExpiredException : public VKException {
public:
    explicit VKLongPollServerKeyExpiredException(const std::string& message) : VKException(message) {}
};

class VKLongPollServerTsException : public VKException {
public:
    explicit VKLongPollServerTsException(const std::string& message) : VKException(message) {}
};

#endif // VKLONGPOLLEXCEPTIONS_HPP