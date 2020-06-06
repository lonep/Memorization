#pragma once
#include <string>
#include <map>
#include "testCard.h"

class TestManager
{
    class statistics{
        std::map<testCard,int> stat_map;
        unsigned int total_answers;
    public:
        void map_initialize(testCard card);
        void check_answer(testCard card, std::string user_answer);
        std::pair<testCard,int> top3();
    };
    statistics stat;
public:
    TestManager(std::list<testCard> &cards);
	void give_stat();
	void get_card(testCard &card);
	//std::vector <testCard> GiveQuestion();
};
