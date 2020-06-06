#pragma once
#include <string>
#include <map>
#include "IO_Module.h"
#include "testCard.h"

class TestManager
{
    class statistics{
        std::map<testCard,int> stat_map;
    public:
        void map_initialize();
        void get_answer(testCard card, std::string user_answer);
        std::pair<testCard,int> top3();
    };
    statistics stat;
public:
	void give_stat();
	void get_card(testCard &card);
	//std::vector <testCard> GiveQuestion();
};
