#include "Board.hpp"

Board::Board(std::shared_ptr<VKApiRequest> request) : request_(request) {}

nlohmann::json Board::addTopic(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("board.addTopic", access_token, params);
}

nlohmann::json Board::closeTopic(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("board.closeTopic", access_token, params);
}

nlohmann::json Board::createComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("board.createComment", access_token, params);
}

nlohmann::json Board::deleteComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("board.deleteComment", access_token, params);
}

nlohmann::json Board::deleteTopic(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("board.deleteTopic", access_token, params);
}

nlohmann::json Board::editComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("board.editComment", access_token, params);
}

nlohmann::json Board::editTopic(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("board.editTopic", access_token, params);
}

nlohmann::json Board::fixTopic(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("board.fixTopic", access_token, params);
}

nlohmann::json Board::getComments(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("board.getComments", access_token, params);
}

nlohmann::json Board::getTopics(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("board.getTopics", access_token, params);
}

nlohmann::json Board::openTopic(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("board.openTopic", access_token, params);
}

nlohmann::json Board::restoreComment(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("board.restoreComment", access_token, params);
}

nlohmann::json Board::unfixTopic(const std::string& access_token, const std::unordered_map<std::string, std::string>& params) {
    return request_->post("board.unfixTopic", access_token, params);
}
