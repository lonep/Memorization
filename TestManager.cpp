#include "testCard.h"
#include "TestManager.h"
#include <set>

bool TestManager::statictic::get_answer(testCard card, std::string user_answer) {
    total_attempts++;
    if(!card.check(user_answer)){
        total_wrong_attempts++;
        return false;
    };
    return true;
}
void TestManager::statistics::map_initialize(testCard card) {
    stat_map.emplace(std::make_pair(card,0));
}
void TestManager::get_card(const testCard &current_card) {
    stat.get_answer(current_card, user_answer);

}
testCard TestManager::statistics::top3() {
    static int it = 0;

}
/*float TestManager::statictic::get_total_percentage() {
    return 1 - (this->total_wrong_attempts/this->total_attempts); // по идее возращает общий процентаж "успешности"
}*/
TestManager::statistics::statistics() {
    total_wrong_attempts = 0;
    total_attempts = 0;
}