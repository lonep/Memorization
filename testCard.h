//
// Created by lonep on 22-May-20.
//

#ifndef TESTCARD_H
#define TESTCARD_H

#include <string>
#include <vector>

class testCard {
    std::string question;
    std::string true_answer;
    std::vector <std::string> false_answer;
    short TOTAL_MISTAKES;
public:
    testCard();
    testCard(std::string &quest, std::string &r_answer, std::vector<std::string> &anw_vec);
    std::string get_question();
    std::string get_trueAnswer();
    std::vector<std::string> get_falseAnswer();
    bool check(std::string anwser);
    bool true_answered = false;
    ~testCard();
};


#endif //TESTCARD_H
