
#include <vector>

void Mixer::stir(vector<string> &falseAn)
{
	
	vector<string> temp;
	while (falseAn.size() != 0)
	{
		int rnd = rand() % falseAn.size()-1;
		temp.push_back(falseAn[rnd]);
		falseAn.erase(falseAn.begin() + rnd);
	}
	falseAn = temp;
}
