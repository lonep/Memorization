//
// Created by Vladimir on 5/28/2020.
//

#include "writerTXT.h"

void writerTXT::write() {
    std::string str;
    std::ifstream input(PATH);
    while(!input.eof()){
        std::getline(input,str);
        if(str[0] == '\\' && str[1] == 'q') {
            str.erase(0,2);
            card.question = str;
        }
        if(str[0] == '\\' && str[1] == 'q') {
            str.erase(0,2);
            card.trueAn = str;
        }
        if(str[0] == '\\' && str[1] == 'q') {
            str.erase(0, 2);
            card.falseAn.push_back(str);
        }
    }
}