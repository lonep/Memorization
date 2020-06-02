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
void file::write(std::list<testCard *> testCards) {
    if(PATH.find(".json") != -1){
        ofstream json;
        json.open(PATH);
        writerJSON write;
        write.write(json, testCards);

    }
    if(PATH.find(".txt") != -1){
        ofstream txt;
        txt.open(PATH);
        writerTXT write;
        write.write(txt, testCards);
    }
}

bool file::getPATH(string s) {
    ifstream test;
    test.open(s);
    if(test.is_open()) {
        return 1;
    }
    else return 0;
}