#include "IO_Module.h"
#include "file.h"
#include "TestManager.h"
#include "TestCard.h"
#include <string>
#include <list>
#include <clocale>
#include <iterator> //Для реализации итератора по списку.

int main() {
    setlocale(LC_ALL, "RUS");
    IO_Module UI;
    std::string user_request;

    bool WR_status = true;
    UI.Greeting();
    user_request = UI.Menu();
   /* do{
        user_request = UI.get_PATH();
    } while (!file::isPATHCorrect(user_request)); */
    file File(user_request,WR_status);
    std::list<testCard> cards;
    cards = File.read();
    TestManager tm(cards);

    auto it = cards.begin();
    while(it != cards.end()){
        UI.show_card(it->get_question(),it->get_all_answers());
        if(it->check_answer(UI.get_answer(it->get_all_answers()))){
            it++;
        }
    }
    ;


}
