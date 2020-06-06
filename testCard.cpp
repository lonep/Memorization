//
// Created by lonep on 01-Jun-20.
//
#include "testCard.h"
#include "Mixer.h"
testCard::testCard() {
    question = "";
    true_answer = "";
    false_answer.clear();
}
testCard::testCard(std::string &quest, std::string &r_answer, std::vector<std::string> &anw_vec) {
    question = quest;
    true_answer = r_answer;
    false_answer = anw_vec;
}
bool testCard::check(std::string anwser) {
    return anwser == question;
}

testCard::~testCard() {}

std::string testCard::get_question() {
    return question;
}
std::string testCard::get_trueAnswer() {
    return true_answer;
}
std::vector<std::string> testCard::get_falseAnswer() {
    return false_answer;
}

std::vector<std::string> testCard::get_all_answers() {
    std::vector <std::string> false_an = false_answer;
    false_an.push_back(true_answer);
    Mixer::mixVector(false_an);
    return false_an;
}
