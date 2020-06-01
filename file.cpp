//
// Created by Vladimir on 5/28/2020.
//

#include "file.h"
#include <fstream>
std::list<testCard*> file::read() {
    if(PATH.find(".json") != -1){
    ifstream json;
    json.open(PATH);
    readerJSON reader;
    return reader.parseFile(json);
    }
    if(PATH.find(".txt") != -1){
    ifstream txt;
    txt.open(PATH);
    readerTXT reader;
    return reader.parseFile(txt);
    }
}

bool file::getPATH(string s) {
    ifstream test;
    test.open(PATH);
    if(test.is_open()) {
        PATH = s;
        return 1;
    }
    else return 0;
}