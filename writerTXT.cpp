//
// Created by Vladimir on 5/28/2020.
//

#include "writerTXT.h"

bool writerTXT::isPATHCorrect(std::string path) {
    std::ifstream input(path);
    if(input.is_open()){
        input.close();
        return true;
    }
    else return false;
}

void writerTXT::setPATH(std::string str){
    if(writerTXT::isPATHCorrect(str))
        PATH = str;
}

void writerTXT::write() {
    std::string temp;
    std::ifstream input(PATH);
    while(!input.eof()){
        std::getline(input,temp);
        if((temp[0]+temp[1]) == "\\q") {
            card.question = temp;
        }
    }
}