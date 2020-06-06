#pragma once
#include "testCard.h"
#include <string>
#include <list>
#include <vector>
#include <map>

class TestManager
{
    std::list<testCard> lcards;
    std::vector<int> q_w_answers;
    unsigned int total_answers;
public:
    TestManager(const std::list<testCard> &cards);
	std::multimap<int,std::string> give_stat();
	bool get_card(testCard &current_card, std::string user_answer);
};

std::_List_iterator<testCard> find_in_list(std::list<testCard>,testCard);
int max_idx_vector(const std::vector<int>&);
int max_in_vector(const std::vector<int>&);
