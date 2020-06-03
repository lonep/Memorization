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
    static short TOTAL_MISTAKES;
public:
    testCard(std::string &quest, std::string &r_answer, std::vector<std::string> &anw_vec);
    std::string get_question();
    std::string get_trueAnwser();
    std::string get_falseAnwsers();
    bool check(std::string anwser);
    short MISTAKES = 0;
    bool true_answered = false;
    ~testCard();
};


#endif //TESTCARD_H
