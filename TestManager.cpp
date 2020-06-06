#include "TestManager.h"
#include <list>

TestManager::TestManager(const std::list<testCard> &cards) {
    stat.total_answers = 0;
    auto it = cards.begin();
    do {
        stat.map_initialize(*it);
        it++;
    }while(it != cards.end());
}
bool TestManager::statictic::check_answer(testCard card, std::string user_answer) {
    if(!card.check(user_answer)){
        return false;
    };
    return true;
}
void TestManager::statistics::map_initialize(testCard card) {
    stat_map.emplace(std::make_pair(card,0));
}
void TestManager::get_card(const testCard &current_card) {
    stat.check_answer(current_card, user_answer);

}
std::pair<testCard,int> TestManager::statistics::top3() {
    static int it = 0;
}