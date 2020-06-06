#include "IO_Module.h"
#include "file.h"
#include "TestManager.h"
#include "TestCard.h"
#include <string>
#include <list>
#include <iterator> //Для реализации итератора по списку.

int main() {

    IO_Module UI;
    std::string user_request;
    bool WR_status = true;
    UI.Greeting();
    do{
        user_request = UI.get_PATH();
    } while (!file::isPATHCorrect(user_request));
    file File(user_request,WR_status);

    std::list<testCard> cards;
    cards = File.read();
<<<<<<< HEAD
    TestManager tm;
    list <testCard>::iterator it = cards.begin(); //Попытался пофиксить итертор
=======
    TestManager tm(cards);
    auto it = cards.begin(); //Попытался пофиксить итертор
>>>>>>> 78ca29b43e0af79926e61a90a8fe1be80f9ef0d6
    while(it != cards.end()){
        UI.show_card(it->get_question(),it->get_all_answers());
        UI.get_answer(it->get_all_answers());
    }

}
