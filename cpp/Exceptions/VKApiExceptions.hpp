#ifndef VKAPIEXCEPTIONS_HPP
#define VKAPIEXCEPTIONS_HPP

#include "VKExceptions.hpp"

// Access Exceptions
class VKApiAccessAlbumException : public VKApiException {
public: VKApiAccessAlbumException(const std::string& msg) : VKApiException(200, msg) {}
};

class VKApiAccessAudioException : public VKApiException {
public: VKApiAccessAudioException(const std::string& msg) : VKApiException(201, msg) {}
};

class VKApiAccessCommentException : public VKApiException {
public: VKApiAccessCommentException(const std::string& msg) : VKApiException(203, msg) {}
};

class VKApiAccessException : public VKApiException {
public: VKApiAccessException(const std::string& msg) : VKApiException(15, msg) {}
};

class VKApiAccessGroupException : public VKApiException {
public: VKApiAccessGroupException(const std::string& msg) : VKApiException(260, msg) {}
};

class VKApiAccessGroupsException : public VKApiException {
public: VKApiAccessGroupsException(const std::string& msg) : VKApiException(260, msg) {}
};

class VKApiAccessMarketException : public VKApiException {
public: VKApiAccessMarketException(const std::string& msg) : VKApiException(1401, msg) {}
};

class VKApiAccessNoteCommentException : public VKApiException {
public: VKApiAccessNoteCommentException(const std::string& msg) : VKApiException(182, msg) {}
};

class VKApiAccessNoteException : public VKApiException {
public: VKApiAccessNoteException(const std::string& msg) : VKApiException(180, msg) {}
};

class VKApiAccessPageException : public VKApiException {
public: VKApiAccessPageException(const std::string& msg) : VKApiException(141, msg) {}
};

class VKApiAccessVideoException : public VKApiException {
public: VKApiAccessVideoException(const std::string& msg) : VKApiException(204, msg) {}
};

// Action Exceptions
class VKApiActionFailedException : public VKApiException {
public: VKApiActionFailedException(const std::string& msg) : VKApiException(202, msg) {}
};

class VKApiAdditionalSignupRequiredException : public VKApiException {
public: VKApiAdditionalSignupRequiredException(const std::string& msg) : VKApiException(3609, msg) {}
};

// Auth Exceptions
class VKApiAuthAccessTokenHasExpiredException : public VKApiException {
public: VKApiAuthAccessTokenHasExpiredException(const std::string& msg) : VKApiException(5, msg) {}
};

class VKApiAuthException : public VKApiException {
public: VKApiAuthException(const std::string& msg) : VKApiException(5, msg) {}
};

class VKApiAuthFloodException : public VKApiException {
public: VKApiAuthFloodException(const std::string& msg) : VKApiException(1112, msg) {}
};

class VKApiAuthHttpsException : public VKApiException {
public: VKApiAuthHttpsException(const std::string& msg) : VKApiException(16, msg) {}
};

class VKApiAuthValidationException : public VKApiException {
public: VKApiAuthValidationException(const std::string& msg) : VKApiException(17, msg) {}
};

// Block Exceptions
class VKApiBlockedException : public VKApiException {
public: VKApiBlockedException(const std::string& msg) : VKApiException(19, msg) {}
};

// Captcha Exception
class VKApiCaptchaException : public VKApiException {
public: VKApiCaptchaException(const std::string& msg) : VKApiException(14, msg) {}
};

// Flood Exception
class VKApiFloodException : public VKApiException {
public: VKApiFloodException(const std::string& msg) : VKApiException(9, msg) {}
};

// Method Exceptions
class VKApiMethodDisabledException : public VKApiException {
public: VKApiMethodDisabledException(const std::string& msg) : VKApiException(23, msg) {}
};

class VKApiMethodException : public VKApiException {
public: VKApiMethodException(const std::string& msg) : VKApiException(3, msg) {}
};

class VKApiMethodPermissionException : public VKApiException {
public: VKApiMethodPermissionException(const std::string& msg) : VKApiException(7, msg) {}
};

// Parameter Exceptions
class VKApiParamException : public VKApiException {
public: VKApiParamException(const std::string& msg) : VKApiException(100, msg) {}
};

class VKApiParamAlbumIdException : public VKApiException {
public: VKApiParamAlbumIdException(const std::string& msg) : VKApiException(114, msg) {}
};

class VKApiParamHashException : public VKApiException {
public: VKApiParamHashException(const std::string& msg) : VKApiException(121, msg) {}
};

class VKApiParamPhotoException : public VKApiException {
public: VKApiParamPhotoException(const std::string& msg) : VKApiException(129, msg) {}
};

class VKApiParamServerException : public VKApiException {
public: VKApiParamServerException(const std::string& msg) : VKApiException(118, msg) {}
};

class VKApiParamUserIdException : public VKApiException {
public: VKApiParamUserIdException(const std::string& msg) : VKApiException(113, msg) {}
};

// Permission Exception
class VKApiPermissionException : public VKApiException {
public: VKApiPermissionException(const std::string& msg) : VKApiException(7, msg) {}
};

// Rate Limit Exception
class VKApiRateLimitException : public VKApiException {
public: VKApiRateLimitException(const std::string& msg) : VKApiException(29, msg) {}
};

// Server Exception
class VKApiServerException : public VKApiException {
public: VKApiServerException(const std::string& msg) : VKApiException(10, msg) {}
};

// Too Many Exception
class VKApiTooManyException : public VKApiException {
public: VKApiTooManyException(const std::string& msg) : VKApiException(6, msg) {}
};

// Unknown Exceptions
class VKApiUnknownException : public VKApiException {
public: VKApiUnknownException(const std::string& msg) : VKApiException(1, msg) {}
};

class VKApiUnknownApplicationException : public VKApiException {
public: VKApiUnknownApplicationException(const std::string& msg) : VKApiException(4, msg) {}
};

class VKApiUnknownUserException : public VKApiException {
public: VKApiUnknownUserException(const std::string& msg) : VKApiException(113, msg) {}
};

// Upload Exception
class VKApiUploadException : public VKApiException {
public: VKApiUploadException(const std::string& msg) : VKApiException(22, msg) {}
};

// User Exceptions
class VKApiUserBannedException : public VKApiException {
public: VKApiUserBannedException(const std::string& msg) : VKApiException(37, msg) {}
};

class VKApiUserDeletedException : public VKApiException {
public: VKApiUserDeletedException(const std::string& msg) : VKApiException(18, msg) {}
};

// Messages Exceptions
class VKApiMessagesDenySendException : public VKApiException {
public: VKApiMessagesDenySendException(const std::string& msg) : VKApiException(901, msg) {}
};

class VKApiMessagesChatNotExistException : public VKApiException {
public: VKApiMessagesChatNotExistException(const std::string& msg) : VKApiException(927, msg) {}
};

class VKApiMessagesUserBlockedException : public VKApiException {
public: VKApiMessagesUserBlockedException(const std::string& msg) : VKApiException(900, msg) {}
};

// Wall Exceptions
class VKApiWallAccessPostException : public VKApiException {
public: VKApiWallAccessPostException(const std::string& msg) : VKApiException(210, msg) {}
};

class VKApiWallAddPostException : public VKApiException {
public: VKApiWallAddPostException(const std::string& msg) : VKApiException(214, msg) {}
};

class VKApiWallAdsPublishedException : public VKApiException {
public: VKApiWallAdsPublishedException(const std::string& msg) : VKApiException(219, msg) {}
};

// Market Exceptions
class VKApiMarketNotEnabledException : public VKApiException {
public: VKApiMarketNotEnabledException(const std::string& msg) : VKApiException(1400, msg) {}
};

class VKApiMarketAlbumNotFoundException : public VKApiException {
public: VKApiMarketAlbumNotFoundException(const std::string& msg) : VKApiException(1402, msg) {}
};

// Group Exceptions
class VKApiGroupNeed2faException : public VKApiException {
public: VKApiGroupNeed2faException(const std::string& msg) : VKApiException(704, msg) {}
};

class VKApiGroupHostNeed2faException : public VKApiException {
public: VKApiGroupHostNeed2faException(const std::string& msg) : VKApiException(704, msg) {}
};

// Albums Exceptions
class VKApiAlbumsLimitException : public VKApiException {
public: VKApiAlbumsLimitException(const std::string& msg) : VKApiException(300, msg) {}
};

class VKApiAlbumFullException : public VKApiException {
public: VKApiAlbumFullException(const std::string& msg) : VKApiException(300, msg) {}
};

// Video Exceptions
class VKApiVideoAlreadyAddedException : public VKApiException {
public: VKApiVideoAlreadyAddedException(const std::string& msg) : VKApiException(800, msg) {}
};

class VKApiVideoCommentsClosedException : public VKApiException {
public: VKApiVideoCommentsClosedException(const std::string& msg) : VKApiException(801, msg) {}
};

// Wait Exception
class VKApiWaitException : public VKApiException {
public: VKApiWaitException(const std::string& msg) : VKApiException(603, msg) {}
};

// Timeout Exception
class VKApiTimeoutException : public VKApiException {
public: VKApiTimeoutException(const std::string& msg) : VKApiException(10, msg) {}
};

// Not Found Exception
class VKApiNotFoundException : public VKApiException {
public: VKApiNotFoundException(const std::string& msg) : VKApiException(113, msg) {}
};

#endif // VKAPIEXCEPTIONS_HPP