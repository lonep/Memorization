#include "TestManager.h"
#include <list>

TestManager::TestManager(const std::list<testCard> &cards) {
    total_answers = 0;
    auto it = cards.begin();
    do {
        stat.map_initialize(*it);
        it++;
    }while(it != cards.end());
}
bool TestManager::statistics::check_answer(testCard card, std::string user_answer) {
    if(!card.check(user_answer)){
        this->stat_map[card]++;
        return false;
    };
    return true;
}
void TestManager::statistics::map_initialize(testCard card) {
    stat_map.emplace(std::make_pair(card,0));
}
bool TestManager::get_card(const testCard &current_card, std::string user_answer) {
    total_answers++;
    return this->stat.check_answer(current_card, user_answer);
}
void TestManager::give_stat() {

}
std::pair<testCard,int> TestManager::statistics::top3() {
    static int it = 0;
    while(it != 3){
        auto iter = stat_map.begin();
        it++;
        std::pair<testCard,int> pair = *iter;
        return *iter;
    }
}