#ifndef VKENUMS_HPP
#define VKENUMS_HPP

#include <string>

#ifdef DOMAIN
#undef DOMAIN
#endif

// Users Fields
class UsersGetFields {
public:
    static const std::string FIRST_NAME_NOM;
    static const std::string FIRST_NAME_GEN;
    static const std::string FIRST_NAME_DAT;
    static const std::string FIRST_NAME_ACC;
    static const std::string FIRST_NAME_INS;
    static const std::string FIRST_NAME_ABL;
    static const std::string LAST_NAME_NOM;
    static const std::string LAST_NAME_GEN;
    static const std::string LAST_NAME_DAT;
    static const std::string LAST_NAME_ACC;
    static const std::string LAST_NAME_INS;
    static const std::string LAST_NAME_ABL;
    static const std::string PHOTO_ID;
    static const std::string VERIFIED;
    static const std::string SEX;
    static const std::string BDATE;
    static const std::string CITY;
    static const std::string HOME_TOWN;
    static const std::string HAS_PHOTO;
    static const std::string PHOTO_50;
    static const std::string PHOTO_100;
    static const std::string PHOTO_200;
    static const std::string PHOTO_400;
    static const std::string PHOTO_MAX;
    static const std::string ONLINE;
    static const std::string DOMAIN;
    static const std::string HAS_MOBILE;
    static const std::string CONTACTS;
    static const std::string SITE;
    static const std::string EDUCATION;
    static const std::string UNIVERSITIES;
    static const std::string SCHOOLS;
    static const std::string STATUS;
    static const std::string LAST_SEEN;
    static const std::string FOLLOWERS_COUNT;
    static const std::string COUNTERS;
    static const std::string OCCUPATION;
    static const std::string NICKNAME;
    static const std::string RELATIVES;
    static const std::string RELATION;
    static const std::string PERSONAL;
    static const std::string CONNECTIONS;
    static const std::string ACTIVITIES;
    static const std::string INTERESTS;
    static const std::string MUSIC;
    static const std::string MOVIES;
    static const std::string TV;
    static const std::string BOOKS;
    static const std::string GAMES;
    static const std::string ABOUT;
    static const std::string QUOTES;
    static const std::string CAN_POST;
    static const std::string CAN_SEE_ALL_POSTS;
    static const std::string CAN_SEE_AUDIO;
    static const std::string CAN_WRITE_PRIVATE_MESSAGE;
    static const std::string CAN_SEND_FRIEND_REQUEST;
    static const std::string IS_FAVORITE;
    static const std::string IS_HIDDEN_FROM_FEED;
    static const std::string TIMEZONE;
    static const std::string SCREEN_NAME;
    static const std::string MAIDEN_NAME;
    static const std::string CROP_PHOTO;
    static const std::string IS_FRIEND;
    static const std::string FRIEND_STATUS;
    static const std::string CAREER;
    static const std::string MILITARY;
    static const std::string BLACKLISTED;
    static const std::string BLACKLISTED_BY_ME;
};

// Groups Fields
class GroupsGetFields {
public:
    static const std::string ID;
    static const std::string NAME;
    static const std::string SCREEN_NAME;
    static const std::string IS_CLOSED;
    static const std::string TYPE;
    static const std::string IS_ADMIN;
    static const std::string ADMIN_LEVEL;
    static const std::string IS_MEMBER;
    static const std::string IS_ADVERTISER;
    static const std::string START_DATE;
    static const std::string FINISH_DATE;
    static const std::string DEACTIVATED;
    static const std::string PHOTO_50;
    static const std::string PHOTO_100;
    static const std::string PHOTO_200;
    static const std::string PHOTO_400;
    static const std::string PHOTO_MAX;
    static const std::string EST_DATE;
    static const std::string PUBLIC_DATE_LABEL;
    static const std::string MARKET;
    static const std::string MEMBER_STATUS;
    static const std::string IS_ADULT;
    static const std::string IS_HIDDEN_FROM_FEED;
    static const std::string IS_FAVORITE;
    static const std::string IS_SUBSCRIBED;
    static const std::string CITY;
    static const std::string VERIFIED;
    static const std::string DESCRIPTION;
    static const std::string WIKI_PAGE;
    static const std::string MEMBERS_COUNT;
    static const std::string COUNTERS;
    static const std::string COVER;
    static const std::string CAN_POST;
    static const std::string CAN_SUGGEST;
    static const std::string CAN_UPLOAD_DOC;
    static const std::string CAN_UPLOAD_VIDEO;
    static const std::string CAN_SEE_ALL_POSTS;
    static const std::string CAN_CREATE_TOPIC;
    static const std::string ACTIVITY;
    static const std::string FIXED_POST;
    static const std::string HAS_PHOTO;
    static const std::string CROP_PHOTO;
    static const std::string STATUS;
    static const std::string MAIN_ALBUM_ID;
    static const std::string LINKS;
    static const std::string CONTACTS;
    static const std::string WALL;
    static const std::string SITE;
    static const std::string MAIN_SECTION;
    static const std::string SECONDARY_SECTION;
    static const std::string TRENDING;
    static const std::string CAN_MESSAGE;
    static const std::string IS_MESSAGES_BLOCKED;
    static const std::string CAN_SEND_NOTIFY;
    static const std::string ONLINE_STATUS;
    static const std::string INVITED_BY;
    static const std::string AGE_LIMITS;
    static const std::string BAN_INFO;
    static const std::string HAS_MARKET_APP;
    static const std::string ADDRESSES;
    static const std::string BUSINESS_RATING;
    static const std::string CATEGORY;
    static const std::string RATING;
};

// Message Types
class MessagesSetActivityType {
public:
    static const std::string TYPING;
    static const std::string AUDIOMESSAGE;
    static const std::string UPLOAD_PHOTO;
    static const std::string UPLOAD_VIDEO;
    static const std::string UPLOAD_AUDIO;
    static const std::string UPLOAD_DOC;
    static const std::string CHOOSE_STICKER;
    static const std::string CHOOSE_GRAFFITI;
};

// Wall Filters
class WallGetFilter {
public:
    static const std::string OWNER;
    static const std::string OTHERS;
    static const std::string ALL;
    static const std::string POSTPONED;
    static const std::string SUGGESTS;
    static const std::string ARCHIVED;
    static const std::string DONUT;
};

// Likes Types
class LikesType {
public:
    static const std::string POST;
    static const std::string COMMENT;
    static const std::string PHOTO;
    static const std::string AUDIO;
    static const std::string VIDEO;
    static const std::string NOTE;
    static const std::string MARKET;
    static const std::string PHOTO_COMMENT;
    static const std::string VIDEO_COMMENT;
    static const std::string TOPIC_COMMENT;
    static const std::string MARKET_COMMENT;
    static const std::string SITEPAGE;
    static const std::string TEXTPOST;
    static const std::string COMMUNITY_REVIEW;
    static const std::string STORY;
    static const std::string GROUP_LIKE;
};

#endif // VKENUMS_HPP