//
// Created by Vladimir on 5/28/2020.
//

#include "file.h"
#include <fstream>
void file::read() {
    if(PATH.find(".json") != -1){ //Просто проверяем наличие такого типа в пути
    ifstream json;                   // -1 это значит подстрока не найдена
    json.open(PATH);
    readerJSON reader;
    testCards = reader.parseFile(json);
    json.close();
    }
    if(PATH.find(".txt") != -1){
    ifstream txt;
    txt.open(PATH);
    readerTXT reader;
    testCards = reader.parseFile(txt); //reader возвращает массив указателей на testCard
    txt.close();
    }
}

void file::getPATH(string s) {
    PATH = s;
}