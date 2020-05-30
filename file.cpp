//
// Created by Vladimir on 5/28/2020.
//

#include "file.h"
#include <fstream>
void file::read() {
    if(PATH.find(".json") != -1){
    ifstream json;
    json.open(PATH);
    readerJSON reader;
    testCards = reader.parseFile(json);
    json.close();
    }
    if(PATH.find(".txt") != -1){
    ifstream txt;
    txt.open(PATH);
    readerTXT reader;
    testCards = reader.parseFile(txt);
    txt.close();
    }
}

void file::getPATH(string s) {
    PATH = s;
}