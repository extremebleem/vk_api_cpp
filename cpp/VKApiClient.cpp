#include "VKApiClient.hpp"
#include "Actions/Users.hpp"
#include "Actions/Account.hpp"
#include "Actions/Auth.hpp"
#include "Actions/Friends.hpp"
#include "Actions/Messages.hpp"
#include "Actions/Photos.hpp"
#include "Actions/Video.hpp"
#include "Actions/Wall.hpp"
#include "Actions/Groups.hpp"
#include "Actions/Polls.hpp"
#include "Actions/Execute.hpp"
#include "Actions/Secure.hpp"
#include "Actions/Status.hpp"
#include "Actions/Storage.hpp"
#include "Actions/Stories.hpp"
#include "Actions/Widgets.hpp"
#include "Actions/PrettyCards.hpp"
#include "Actions/Newsfeed.hpp"
#include "Actions/Likes.hpp"
#include "Actions/Market.hpp"
#include "Actions/Apps.hpp"
#include "Actions/Board.hpp"
#include "Actions/Docs.hpp"
#include "Actions/Fave.hpp"
#include "Actions/Notes.hpp"
#include "Actions/Pages.hpp"
#include "Actions/Search.hpp"
#include "Actions/Utils.hpp"
#include "Actions/Calls.hpp"
#include "Actions/Database.hpp"
#include "Actions/Gifts.hpp"
#include "Actions/LeadForms.hpp"
#include "Actions/Stats.hpp"
#include "Actions/Streaming.hpp"
#include "Actions/Translations.hpp"
#include <stdexcept>

const std::string VKApiClient::API_VERSION = "5.199";
const std::string VKApiClient::API_HOST = "https://api.vk.com/method";

VKApiClient::VKApiClient(const std::string& api_version, const std::string& language) {
    request_ = std::make_shared<VKApiRequest>(api_version, language, API_HOST);
}

std::shared_ptr<VKApiRequest> VKApiClient::getRequest() const {
    return request_;
}

std::shared_ptr<ActionInterface> VKApiClient::getAction(const std::string& name) {
    std::string lower_name = name;
    std::transform(lower_name.begin(), lower_name.end(), lower_name.begin(), ::tolower);

    if (instances_.find(lower_name) == instances_.end()) {
        if (lower_name == "users") {
            instances_[lower_name] = std::make_shared<Users>(request_);
        } else if (lower_name == "account") {
            instances_[lower_name] = std::make_shared<Account>(request_);
        } else if (lower_name == "groups") {
            instances_[lower_name] = std::make_shared<Groups>(request_);
        } else if (lower_name == "auth") {
            instances_[lower_name] = std::make_shared<Auth>(request_);
        } else if (lower_name == "friends") {
            instances_[lower_name] = std::make_shared<Friends>(request_);
        } else if (lower_name == "messages") {
            instances_[lower_name] = std::make_shared<Messages>(request_);
        } else if (lower_name == "photos") {
            instances_[lower_name] = std::make_shared<Photos>(request_);
        } else if (lower_name == "video") {
            instances_[lower_name] = std::make_shared<Video>(request_);
        } else if (lower_name == "wall") {
            instances_[lower_name] = std::make_shared<Wall>(request_);
        } else if (lower_name == "polls") {
            instances_[lower_name] = std::make_shared<Polls>(request_);
        } else if (lower_name == "execute") {
            instances_[lower_name] = std::make_shared<Execute>(request_);
        } else if (lower_name == "secure") {
            instances_[lower_name] = std::make_shared<Secure>(request_);
        } else if (lower_name == "status") {
            instances_[lower_name] = std::make_shared<Status>(request_);
        } else if (lower_name == "storage") {
            instances_[lower_name] = std::make_shared<Storage>(request_);
        } else if (lower_name == "stories") {
            instances_[lower_name] = std::make_shared<Stories>(request_);
        } else if (lower_name == "widgets") {
            instances_[lower_name] = std::make_shared<Widgets>(request_);
        } else if (lower_name == "prettycards") {
            instances_[lower_name] = std::make_shared<PrettyCards>(request_);
        } else if (lower_name == "newsfeed") {
            instances_[lower_name] = std::make_shared<Newsfeed>(request_);
        } else if (lower_name == "likes") {
            instances_[lower_name] = std::make_shared<Likes>(request_);
        } else if (lower_name == "market") {
            instances_[lower_name] = std::make_shared<Market>(request_);
        } else if (lower_name == "apps") {
            instances_[lower_name] = std::make_shared<Apps>(request_);
        } else if (lower_name == "board") {
            instances_[lower_name] = std::make_shared<Board>(request_);
        } else if (lower_name == "docs") {
            instances_[lower_name] = std::make_shared<Docs>(request_);
        } else if (lower_name == "fave") {
            instances_[lower_name] = std::make_shared<Fave>(request_);
        } else if (lower_name == "notes") {
            instances_[lower_name] = std::make_shared<Notes>(request_);
        } else if (lower_name == "pages") {
            instances_[lower_name] = std::make_shared<Pages>(request_);
        } else if (lower_name == "search") {
            instances_[lower_name] = std::make_shared<Search>(request_);
        } else if (lower_name == "utils") {
            instances_[lower_name] = std::make_shared<Utils>(request_);
        } else if (lower_name == "calls") {
            instances_[lower_name] = std::make_shared<Calls>(request_);
        } else if (lower_name == "database") {
            instances_[lower_name] = std::make_shared<Database>(request_);
        } else if (lower_name == "gifts") {
            instances_[lower_name] = std::make_shared<Gifts>(request_);
        } else if (lower_name == "leadforms") {
            instances_[lower_name] = std::make_shared<LeadForms>(request_);
        } else if (lower_name == "stats") {
            instances_[lower_name] = std::make_shared<Stats>(request_);
        } else if (lower_name == "streaming") {
            instances_[lower_name] = std::make_shared<Streaming>(request_);
        } else if (lower_name == "translations") {
            instances_[lower_name] = std::make_shared<Translations>(request_);
        } else {
            throw std::runtime_error("Class " + name + " not found");
        }
    }

    return instances_[lower_name];
}
