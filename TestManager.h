#pragma once 
#include <iostream>
#include <vector>
#include <list>
#include "IOModule.h"
#include "TestCard.h"
class TestManager
{
	short Counter;
	std::list <testCard> TestCards;
public:
	bool GetAnswer(std::string AnswerNumber);
	std::vector <testCard> GiveQuestion();
	
};
