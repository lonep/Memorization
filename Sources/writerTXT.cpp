//
// Created by Vladimir on 5/28/2020.
//

#include "../Headers/writerTXT.h"
void writerTXT::write(std::ofstream &file, std::list<testCard> &testCards) {
    auto it = testCards.begin();
    while(it!=testCards.end()){
        file << "<q> " << it->get_question() << '\n';
        file << "<t> " << it->get_trueAnswer() << '\n';
        for(auto it_for_copy:it->get_falseAnswer())
            file << "<f> "<< it_for_copy << '\n';
        it++;
    }
}