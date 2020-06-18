//
// Created by Vladimir on 5/28/2020.
//

#include "writerTXT.h"
void writerTXT::write(std::ofstream &file, std::list<testCard> &testCards) {
    auto it = testCards.begin();
    std::vector<std::string> copy = it->get_falseAnswer();
    auto it_for_copy = copy.begin();
    while(it!=testCards.end()){
        file << "<q> " << it->get_question() << '\n';
        file << "<t> " << it->get_trueAnswer() << '\n';
        while(it_for_copy != copy.end()) {
            file << "<f> " << *it_for_copy << '\n';
            it_for_copy++;
        }
        it++;
    }
}