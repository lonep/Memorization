#pragma once
#include <vector>
#include <string>
#include "IO_Module.h"
#include "testCard.h"

class TestManager
{
    class statictic{
        unsigned int total_wrong_attempts;
        unsigned int total_attempts;
        //нужна ли статистика по выбранному пользователем вопросу, мб скок процент ошибок по конкретному вопросу?
    public:
        statictic();
        float get_total_percentage();
        void get_answer(testCard card, std::string user_answer);
    };
    statictic stat;
	//short Counter;
public:
	//void GetAnswer(std::string AnswerNumber);
	void get_card(testCard &card);
	std::vector <testCard> GiveQuestion();
};
