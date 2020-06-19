#include "../Headers/IO_Module.h"
#include "../Headers/file.h"
#include <iostream>
#include <clocale>
#include <conio.h>

void IO_Module::Greeting()
{
	std::cout << "The Memorization program welcomes you!\n";
	std::cout << "This program is designed to remember any information by repeating\n";
	std::cout << "You can create questions or open a ready-made test\n";
	std::cout << "Press any key to continue...";
	//_getch();  временно. Из-за него дебаг не работает
	}

bool IO_Module::Menu()
{
	std::cout << "What do you want to do: \n C - Create a test; \n O - Open the test.\n";
	std::cout << "Your choice: ";
	char answer = ' ';
	while (true)
	{
		std::cin >> answer;
		if (answer == 'C' || answer == 'c') {
			std::cout << std::endl;
			return 0;
		}
		else if (answer == 'O' || answer == 'o') {
			std::cout << std::endl;
			return 1;
		}
		else std::cout << "Invalid input. Try again: ";
	}
}

std::string IO_Module::get_PATH(bool mode)
{
	std::string path = "0";
	std::cout << "Please write the full file name: ";
	if (mode == 0)
		std::cin >> path;
	else {
		do {
			std::cin >> path;
			if (!file::isPATHCorrect(path, mode))
				std::cout << "Invalid input. Try again: ";
		} while (!file::isPATHCorrect(path, mode));
	}
	std::cout << std::endl;
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
	std::cout << std::endl;
	return answers[--answ];
}

void IO_Module::show_stats(std::multimap<int, std::string> stat)
{
	if (stat.empty())
		std::cout << "You didn't make a single mistake!\n";
	else for (auto p : stat)
		std::cout << "In the question '" << p.second << "' " << p.first << " errors\n";
}

std::list<testCard> IO_Module::get_questions() {
    short count;
    string quest, tRue, falseAn;
    std::vector <string> false_an;
    std::list<testCard> cards;

    cout << "How many questions do you want to enter? \n";
    cin >> count;
    for(int i = 1; i <= count; i++){
        cout << "Input  " << i << " question \n";
        cin.sync();
        getline(cin, quest);
        cout << "Input true answer \n";
        getline(cin, tRue);
        for (int j = 1; j < 4; j++){
            cout << "Input " << j << " false answer \n";
            getline(cin,falseAn);
            false_an.push_back(falseAn);
            falseAn.clear();

        }
        testCard card(quest,tRue,false_an);
        cards.push_back(card);
        quest.clear();
        tRue.clear();
        false_an.clear();
    }
    return cards;
}

