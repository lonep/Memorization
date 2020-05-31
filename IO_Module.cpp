#include "IO_Module.h"

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

std::string IO_Module::get_path()
{
	std::string path = "0";
	std::cout << "Введите путь к файлу: ";
	std::cin >> path;
	return path;
}

std::string IO_Module::create_path()
{
	std::string path = "0";
	std::cout << "Введите путь нового файла: ";
	std::cin >> path;
	return path;
}

void IO_Module::show_card(TestCard card)
{
	std::cout << card.question << '\n' << '\n';
	int count = 1;
	for (int i = 0; i < card.*здесь должен быть вектор с ответами на вопрос * .size(); i++)
	{
		std::cout << count << ". " << card.falseAn[i] << '\n';
		count++;
	}
}

char IO_Module::get_answer()
{
	char answer = '0';
	int count = 1;
	std::cout << "Введите Ваш ответ: ";
	while (count)
	{
		std::cin >> answer;
		if (answer < 49 || answer > 57)
			std::cout << "Некорректный ввод. Попробуйте снова: ";
		else count = 0;
	}
	return answer;
}




