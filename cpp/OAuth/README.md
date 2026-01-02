# OAuth Module - Complete Implementation

## ✅ OAuth Structure Now Matches PHP

### Core Classes
- **AbstractOAuth** - Base OAuth functionality with curl
- **UserOAuth** - User authorization (VK ID OAuth 2.0)
- **GroupOAuth** - Group/Community authorization  
- **ResponseType** - OAuth response type constants

### Scopes
- **UserScopes** - User permission scopes (17 scopes)
- **GroupScopes** - Group permission scopes (5 scopes)

### File Count Comparison
**PHP OAuth**: 16 files  
**C++ OAuth**: 12 files

The difference is due to:
1. **DTO classes in PHP** - We use `std::unordered_map<string,string>` instead
2. **Display/ViewType enums** - Can be passed as string constants
3. **Simplified structure** - C++ doesn't need separate DTO classes for simple parameter passing

## Usage Examples

### User Authorization
```cpp
UserOAuth oauth;
std::string url = oauth.getAuthorizeUrl({
    {"client_id", "12345"},
    {"redirect_uri", "https://example.com"},
    {"scope", UserScopes::EMAIL + " " + UserScopes::FRIENDS},
    {"response_type", ResponseType::CODE}
});

auto tokens = oauth.getTokens({
    {"client_id", "12345"},
    {"client_secret", "secret"},
    {"code", "received_code"},
    {"redirect_uri", "https://example.com"}
});
```

### Group Authorization  
```cpp
GroupOAuth oauth;
std::string url = oauth.getAuthorizeUrl({
    {"client_id", "12345"},
    {"scope", std::to_string(GroupScopes::MESSAGES)},
    {"response_type", ResponseType::CODE}
});

auto token = oauth.getAccessToken({
    {"client_id", "12345"},
    {"client_secret", "secret"},
    {"code", "received_code"}
});
```

The C++ implementation is now functionally equivalent to PHP while being more streamlined.