#include "IO_Module.h"
#include "file.h"
#include "TestManager.h"
#include "TestCard.h"
#include <string>
#include <list>
#include <iostream>
#include <clocale>
#include <iterator> //Для реализации итератора по списку.

int main() {
    IO_Module UI;
    std::string user_request;

    bool WR_status = true;
    UI.Greeting();
    WR_status = UI.Menu();
    do{
        user_request = UI.get_PATH(WR_status);
    } while (!file::isPATHCorrect(user_request));
    file File(user_request,WR_status);
    std::list<testCard> cards;
    cards = File.read();
    TestManager tm(cards);
    auto it = cards.begin();
    if(WR_status) {
        while (it != cards.end()) {
            UI.show_card(it->get_question(), it->get_all_answers());
            user_request = UI.get_answer(it->get_all_answers());
            if (tm.get_card(*it, user_request)) {
                it++;
            }
        }
        UI.show_stats(tm.give_stat());
    }
    else {
        std::cout << "This func doesn't work.";
    }

}
