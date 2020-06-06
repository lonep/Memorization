#pragma once
#include <string>
#include <map>
#include "testCard.h"

class TestManager
{
    class statistics{
        std::map<testCard,int> stat_map;
    public:
        void map_initialize(testCard card);
        void check_answer(testCard card, std::string user_answer);
        std::pair<testCard,int> top3();
    };
    statistics stat;
    unsigned int total_answers;
public:
    TestManager(const std::list<testCard> &cards);
	void give_stat();
	bool get_card(const testCard &current_card, std::string user_answer);
	//std::vector <testCard> GiveQuestion();
};
