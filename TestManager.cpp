#include "testCard.h"
#include "TestManager.h"

void TestManager::statictic::get_answer(testCard card, std::string user_answer) {
    total_attempts++;
    if(!card.check(user_answer)) total_wrong_attempts++;
}
float TestManager::statictic::get_total_percentage() {
    return 1 - (this->total_wrong_attempts/this->total_attempts); // по идее возращает общий процентаж "успешности"
}
TestManager::statictic::statictic() {
    total_wrong_attempts = 0;
    total_attempts = 0;
}
void TestManager::get_card(testCard &current_card) {
    stat.get_answer(current_card, user_answer);
}
/*void TestManager::GetAnswer(std::string user_answer)
{
	while (Counter != TestCards.size())
	{
		bool check = TestCards.back().check(user_answer);
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
}*/
