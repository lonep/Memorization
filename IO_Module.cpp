#include "IO_Module.h"
#include "file.h"

void IO_Module::Greeting()
{
	std::cout << "Вас привествует программа Memorization!\n";
	std::cout << "Данная программа предназначена для запоминания какой либо информации путем повторения\n";
	std::cout << "Вы можете создать вопросы или открыть уже готовый тест\n";
	std::cout << "Нажмите любую клавишу, чтобы начать работу..."
	char start = '0';
	std::cin >> start;
}

void IO_Module::Menu()
{
	std::cout << "Что Вы хотите сделать: \n C - Создать тест; \n O - Открыть существующий.\n";
	std::cout << "Ваш выбор: ";
	char answer = ' ';
	int count = 1;
	while (count)
	{
		std::cin >> answer;
		if (answer == 'C' || answer == 'c' || answer == 'С' || answer == 'с') {
			create_path();
			count = 0;
		}
		else if (answer == 'O' || answer == 'o' || answer == 'О' || answer == 'о') {
			get_path();
			count = 0;
		}
		else std::cout << "Некорректный ввод. Попробуйте снова: ";
	}
}

std::string IO_Module::get_PATH()
{
	std::string path = "0";
	std::cout << "Введите путь к файлу: ";
	do {
		std::cin >> path;
		if (!file::isPATHCorrect(path))
			std::cout << "Введён некорректный путь к файлу. Попробуйте снова: ";
	} while (!file::isPATHCorrect(path))
	return path;
}

std::string IO_Module::create_PATH()
{
	std::string path = "0";
	std::cout << "Введите путь нового файла: ";
	std::cin >> path;
	return path;
}

void IO_Module::show_card(std::string question, std::vector<std::string> answers)
{
	std::cout << question << '\n' << '\n';
	int count = 1;
	for (int i = 0; i < answers.size(); i++)
	{
		std::cout << count << ". " << answers[i] << '\n';
		count++;
	}
}

std::string IO_Module::get_answer(std::vector<std::string> answers)
{
	std::string answer = "0";
	int count = 1;
	std::cout << "Введите Ваш ответ: ";
	while (count)
	{
		std::cin >> answer;
		if (answer !="1" || answer != "2" || answer != "3" || answer != "4")
			std::cout << "Некорректный ввод. Попробуйте снова: ";
		else count = 0;
	}
	int answ = stoi(answer);
	return answers[--answ];
}




