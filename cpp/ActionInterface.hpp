#ifndef ACTION_INTERFACE_HPP
#define ACTION_INTERFACE_HPP

#include <unordered_map>
#include <string>
#include <memory>
#include "nlohmann/json.hpp"

class ActionInterface {
public:
    virtual ~ActionInterface() = default;
};

#endif // ACTION_INTERFACE_HPP
