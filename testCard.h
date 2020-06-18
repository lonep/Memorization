//
// Created by lonep on 22-May-20.
//

#ifndef TESTCARD_H
#define TESTCARD_H

#include <string>
#include <vector>
#include <array>


class testCard {
    std::string question;
    std::string r_answer;
    std::vector <std::string> w_answer;
public:
    testCard();
    testCard(std::string&, std::string&, std::vector<std::string>&);
    std::string get_question();
    std::string get_trueAnswer();
    std::vector<std::string> get_falseAnswer();
    bool check_answer(std::string);
    std::vector <std::string> get_all_answers();
    bool operator==(testCard);
    bool operator!=(testCard);
};


#endif //TESTCARD_H
