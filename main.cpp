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
    TestManager tm;

    list <testCard>::iterator it = cards.begin(); //Попытался пофиксить итертор
    while(it != cards.end()){
    }
    
}
