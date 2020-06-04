#include "IO_Module.h"
#include "file.h"
#include "TestManager.h"
#include "TestCard.h"
#include <string>
#include <list>

int main() {

    IO_Module UI;
    std::string user_request;
    bool WR_status = true;
    UI.Greeting();
    do{
        user_request = UI.get_PATH();
    } while (!file::isPATHCorrect(user_request));
    file File; //todo конструктор для file;

    std::list<testCard*> cards; //Память под карточки выделяется в reader -> указатели нужны, чтобы потом удалить их
    cards = File.read();
    TestManager tm;

    auto it = cards.begin();
    while(it != cards.end()){
        //UI.show_card() какая то нерабочая штука с итераторами
    }

}
