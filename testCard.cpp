//
// Created by lonep on 01-Jun-20.
//
#include "testCard.h"
#include "Mixer.h"

testCard::testCard() {
    question = "";
    r_answer = "";
}
testCard::testCard(std::string &question, std::string &r_answer, std::vector<std::string> &w_answer) {
    this->question = question;
    this->r_answer = r_answer;
    this->w_answer = w_answer;
}
bool testCard::check_answer(const std::string anwser) {
    return r_answer == anwser;
}
std::string testCard::get_question() {
    return question;
}
std::string testCard::get_trueAnswer() {
    return r_answer;
}
std::vector<std::string> testCard::get_falseAnswer() {
    return w_answer;
}
std::vector<std::string> testCard::get_all_answers() {
    std::vector <std::string> false_an = w_answer;
    false_an.push_back(r_answer);
    Mixer::mixVector(false_an);
    return false_an;
}
bool testCard::operator==(testCard _card) {
    return this->question==_card.question && this->r_answer == _card.r_answer && this->w_answer == _card.w_answer;
}
bool testCard::operator!=(testCard _card) {
    return this->question != _card.question && this->r_answer != _card.r_answer && this->w_answer != _card.w_answer;
}