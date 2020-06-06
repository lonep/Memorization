//
// Created by Vladimir on 5/28/2020.
//

#include "file.h"
#include <fstream>

std::list<testCard> file::read() {
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
void file::write(std::list<testCard> testCards) {
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

bool file::isPATHCorrect(const std::string path) {
    std::ifstream tmp(path);
    if(tmp.is_open()){
        tmp.close();
        return true;
    }
    else return false;
}

file::file(std::string &path, bool &MODE) {
    PATH = path;
    mode = MODE;
}