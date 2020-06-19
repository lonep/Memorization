#include "../Headers/IO_Module.h"
#include "../Headers/file.h"
#include "../Headers/TestManager.h"
#include "../Headers/testCard.h"
#include <string>
#include <list>
#include <iostream>

int main() {
    IO_Module UI;
    std::string user_request;

    bool WR_status = true;
    UI.Greeting();
    WR_status = UI.Menu();
    do{
        user_request = UI.get_PATH(WR_status);
    } while (!file::isPATHCorrect(user_request, WR_status));
    file File(user_request,WR_status);
    std::list<testCard> cards;
    if(WR_status){
    cards = File.read();
    TestManager tm(cards);
    auto it = cards.begin();
    vector <string> all_answers;
        while (it != cards.end()) {
            all_answers = it->get_all_answers();
            UI.show_card(it->get_question(), all_answers);
            user_request = UI.get_answer(all_answers);
            if (tm.get_card(*it, user_request)) {
                it++;
            }
        }
        UI.show_stats(tm.give_stat());
    }
    else {
        cards = UI.get_questions();
        File.write(cards);
    }
    system("pause");
}
