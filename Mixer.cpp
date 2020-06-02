#include"Mixer.h"

void Mixer::mixVector(std::vector<std::string> &answers)
{
	std::vector<std::string> temp;
	while (answers.size() != 0)
	{
		int rnd = rand() % answers.size()-1;
		temp.push_back(answers[rnd]);
		answers.erase(answers.begin() + rnd);
	}
	answers = temp;
}
