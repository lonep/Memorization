//
// Created by lonep on 22-May-20.
//
#include <iostream>
#include "readerTXT.h"
#include <string>
#include <sstream>

std::list<testCard*> readerTXT::parseFile(std::ifstream &file) {
    std::list<testCard*> cardList;


    string s;
    getline(file, s);

    while (!file.eof()) {
        testCard *card = new testCard;
        for (int i = 4; i < s.length(); i++)
            card->question += s[i];
        getline(file, s);
        for (int i = 4; i < s.length(); i++)
            card->trueAn += s[i];
        getline(file, s);
        stringstream f;
        while (s[1] == 'f' && s.length()>0) {
            for (int i = 4; i < s.length(); i++)
                f << s[i];
            card->falseAn.push_back(f.str());
            f.str("");
            f.clear();
            getline(file, s);
        }
        cardList.push_back(card);
    }
    return cardList;
}