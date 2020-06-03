#include "IO_Module.h"
#include "file.h"

void IO_Module::Greeting()
{
	std::cout << "Âàñ ïðèâåñòâóåò ïðîãðàììà Memorization!\n";
	std::cout << "Äàííàÿ ïðîãðàììà ïðåäíàçíà÷åíà äëÿ çàïîìèíàíèÿ êàêîé ëèáî èíôîðìàöèè ïóòåì ïîâòîðåíèÿ\n";
	std::cout << "Âû ìîæåòå ñîçäàòü âîïðîñû èëè îòêðûòü óæå ãîòîâûé òåñò\n";
	std::cout << "Íàæìèòå ëþáóþ êëàâèøó, ÷òîáû íà÷àòü ðàáîòó..."
	char start = '0';
	std::cin >> start;
}

void IO_Module::Menu()
{
	std::cout << "×òî Âû õîòèòå ñäåëàòü: \n C - Ñîçäàòü òåñò; \n O - Îòêðûòü ñóùåñòâóþùèé.\n";
	std::cout << "Âàø âûáîð: ";
	char answer = ' ';
	int count = 1;
	while (count)
	{
		std::cin >> answer;
		if (answer == 'C' || answer == 'c' || answer == 'Ñ' || answer == 'ñ') {
			create_path();
			count = 0;
		}
		else if (answer == 'O' || answer == 'o' || answer == 'Î' || answer == 'î') {
			get_path();
			count = 0;
		}
		else std::cout << "Íåêîððåêòíûé ââîä. Ïîïðîáóéòå ñíîâà: ";
	}
}

std::string IO_Module::get_PATH()
{
	std::string path = "0";
	std::cout << "Ââåäèòå ïóòü ê ôàéëó: ";
	do {
		std::cin >> path;
		if (!file::isPATHCorrect(path))
			std::cout << "Ââåä¸í íåêîððåêòíûé ïóòü ê ôàéëó. Ïîïðîáóéòå ñíîâà: ";
	} while (!file::isPATHCorrect(path))
	return path;
}

std::string IO_Module::create_PATH()
{
	std::string path = "0";
	std::cout << "Ââåäèòå ïóòü íîâîãî ôàéëà: ";
	std::cin >> path;
	return path;
}

void IO_Module::show_card(std::string question, std::vector<std::string> answers)
{
	string temp;
	for (int j = 0; j < 11; j++)
	{
		if (j % 2 != 0)
		{
			switch (j)
			{
			case 3:
				temp = answers[0]; //answer 1
				break;
			case 5:
				temp = answers[1]; //answer 2
				break;
			case 7:
				temp = answers[2]; //answer 3
				break;
			case 9:
				temp = answers[3]; //answer 4
				break;
			default :
				temp = question; //question
				break;
			}
			int counter = 0;
			int answer_index = 0;
			while (counter < temp.length())
			{

				for (int i = 0; i < 106; i++)
				{
					if ((i == 2) && (answer_index != 0) && (counter < 100))
					{
						std::cout << answer_index << ')';
						i += 2;
						continue;
					}
					if (i == 0 or i == 105)
					{
						std::cout << '|';
						continue;
					}
					if (i == 1 or i == 104)
					{
						std::cout << ' ';
						if (counter < 100)
							switch (j)
							{
							case 3:
								cout << "1)";
								i += 2;
								break;
							case 5:
								cout << "2)";
								i += 2;
								break;
							case 7:
								cout << "3)";
								i += 2;
								break;
							case 9:
								cout << "4)";
								i += 2;
								break;
							}
						continue;
					}

					if (counter < temp.length())
						std::cout << temp[counter];
					else
						std::cout << ' ';
					counter++;
				}
				std::cout << endl;
				answer_index++;
			}
		}
		else
		{
			for (int i = 0; i < 106; i++)
			{
				if (i == 0 or i == 105)
				{
					if (j == 0 or j == 10)
						std::cout << '#';
					else
						std::cout << '|';
					continue;
				}
				else
					std::cout << '~';
			}
			std::cout << std::endl;
		}
	}
}

std::string IO_Module::get_answer(std::vector<std::string> answers)
{
	std::string answer = "0";
	int count = 1;
	std::cout << "Ââåäèòå Âàø îòâåò: ";
	while (count)
	{
		std::cin >> answer;
		if (answer !="1" || answer != "2" || answer != "3" || answer != "4")
			std::cout << "Íåêîððåêòíûé ââîä. Ïîïðîáóéòå ñíîâà: ";
		else count = 0;
	}
	int answ = stoi(answer);
	return answers[--answ];
}




