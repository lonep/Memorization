#pragma once
#include "testCard.h"
#include <string>
#include <vector>
#include <map>
#include <list>

class IO_Module{
public:
    void Greeting();
    bool Menu();
    std::string get_PATH(bool mode);
    void show_card (std::string question, std::vector<std::string> answers);
    std::string get_answer(std::vector<std::string> answers);
    void show_stats(std::multimap<int, std::string> stat);
    std::list<testCard> get_questions();
};