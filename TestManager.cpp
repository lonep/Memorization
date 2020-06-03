#include "TestCard.h"
#include "TestManager.h"

bool TestManager::GetAnswer(std::string AnswerNumber)
{
	while (Counter != TestCards.size())
	{
		bool check = TestCards.back().checkAnwser(AnswerNumber);
		if (check == true && TestCards.back().true_answered == false)
		{
			TestCards.back().true_answered = true;
			TestCards.push_front(TestCards.back());
			TestCards.pop_back;
		}
		if (check == true && TestCards.back().true_answered == true)
		{
			Counter++;
			//TestCards.push_front(TestCards.back());
			TestCards.pop_back;
		}
		if (check == false && TestCards.back().true_answered == false)
		{
		    TestCards.back().mistakes++;
		    TestCards.back().globalmistakes++;
		}
	}
}