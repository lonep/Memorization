#include"Mixer.h"
#include <ctime>

void Mixer::mixVector(std::vector<std::string> &answers)
{
	std::vector<std::string> temp;
	while (answers.size() != 0)
	{
		srand(time(0));
		int rnd = rand() % answers.size();
		temp.push_back(answers[rnd]);
		answers.erase(answers.begin() + rnd);
	}
	answers = temp;
}
