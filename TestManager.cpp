#include "TestManager.h"

TestManager::TestManager(const std::list<testCard> &cards) {
    lcards = cards;
    for(auto i:cards)
        q_w_answers.push_back(0);
    total_answers = 0;
}
std::multimap<int, std::string> TestManager::give_stat() {
    std::multimap<int,std::string> map_stats;
    if(max_in_vector(q_w_answers) == 0)
        return map_stats;
    for (int n = 0; n < 3; n++) {
        auto it = lcards.begin();
        for (int i = 0; i < max_idx_vector(q_w_answers); i++)
            it++;
        if(max_in_vector(q_w_answers) != 0)
            map_stats.emplace(std::make_pair(max_in_vector(q_w_answers), it->get_question()));
        q_w_answers[max_idx_vector(q_w_answers)] = -1;
    }
    return map_stats;
}
bool TestManager::get_card(testCard &current_card, const std::string user_answer) {
    if(!current_card.check_answer(user_answer)){
        auto it = lcards.begin();
        int index = 0;
        while(*it != current_card){
            it++;
            index++;
        }
        q_w_answers[index]++;
        total_answers++;
        return false;
    }
    else {
        total_answers++;
        return true;
    }
}
unsigned int TestManager::give_total_ans() {
    return total_answers;
}


int max_idx_vector(const std::vector<int> &vec) {
    int max = 0;
    int index=0;
    for(int i = 0; i < vec.size(); i++){
        if(vec[i]>max){
            max = vec[i];
            index = i;
        }
    }
    return index;
}
int max_in_vector(const std::vector<int>& vec){
    int max = 0;
    for(int i = 0; i < vec.size(); i++){
        if(vec[i]>max){
            max = vec[i];
        }
    }
    return max;
}
