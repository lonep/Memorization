#include "IO_Module.h"
#include "file.h"
#include <iostream>
#include <clocale>

void IO_Module::Greeting()
{
	std::cout << "The Memorization program welcomes you!\n";
	std::cout << "This program is designed to remember any information by repeating\n";
	std::cout << "You can create questions or open a ready-made test\n";
	std::cout << "Press any key to continue...";
	char start = '0';
	std::cin >> start;
}

bool IO_Module::Menu()
{
	std::cout << "What do you want to do: \n C - Create a test; \n O - Open the test.\n";
	std::cout << "Your choice: ";
	char answer = ' ';
	while (true)
	{
		std::cin >> answer;
		if (answer == 'C' || answer == 'c')
			return 0;
		else if (answer == 'O' || answer == 'o')
			return 1;
		else std::cout << "Invalid input. Try again: ";
	}
}

std::string IO_Module::get_PATH(bool mode)
{
	std::string path = "0";
	std::cout << "Enter the path to the file: ";
	if (mode == 0)
		cin >> path;
	else {
		do {
			std::cin >> path;
			if (!file::isPATHCorrect(path))
				std::cout << "Invalid input. Try again: ";
		} while (!file::isPATHCorrect(path));
	}
	return path;
}

/*std::string IO_Module::create_PATH()
{
	std::string path = "0";
	std::cout << "Enter the file path: ";
	std::cin >> path;
	return path;
}*/

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
						std::cout << answer_index << ")";
						i += 2;
						continue;
					}
					if (i == 0 or i == 105)
					{
						std::cout << "|";
						continue;
					}
					if (i == 1 or i == 104)
					{
						std::cout << " " ;
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
						std::cout << " ";
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
						std::cout << "#";
					else
						std::cout << "|";
					continue;
				}
				else
					std::cout << "~";
			}
			std::cout << std::endl;
		}
	}
}

std::string IO_Module::get_answer(std::vector<std::string> answers)
{
	std::string answer = "0";
	int count = 1;
	std::cout << "Enter Your answer: ";
	while (count)
	{
		std::cin >> answer;
		if (answer == "1" || answer == "2" || answer == "3" || answer == "4")
			count = 0;
		else std::cout << "Invalid input. Try again: ";
	}
	int answ = stoi(answer);
	return answers[--answ];
}

void IO_Module::show_stats(std::multimap<int, std::string> stat)
{
	for (auto p : stat)
		std::cout << "In the question '" << p.second << "' " << p.first << " errors\n";
}

