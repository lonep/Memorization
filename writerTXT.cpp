//
// Created by Vladimir on 5/28/2020.
//

#include "writerTXT.h"

bool writerTXT::isPATHCorrect(std::string& path) {
    std::ifstream input(path);
    if(input.is_open()){
        input.close();
        return true;
    }
    else{
        path += "test.txt";
        input.open(path);
        if(input.is_open()){
            input.close();
            return true;
        }
        else return false;
    }
}

void writerTXT::setPATH(std::string str){
    if(writerTXT::isPATHCorrect(str))
        PATH = str;
}
void writerTXT::setCARDS() {

}
void writerTXT::write() {
    std::string str;
    std::ofstream input(PATH);
    for(auto n = cards.begin();n != cards.end(); n++){
        input << "<q> " << n->question << '\n';
        input << "<t> " << n->trueAn << '\n';
        for(std::string str: n->falseAn)
            input << "<f> " << str << '\n';
    }
}