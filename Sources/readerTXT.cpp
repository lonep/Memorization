//
// Created by lonep on 22-May-20.
//
#include <iostream>
#include "../Headers/readerTXT.h"
#include <string>
#include <sstream>

std::list<testCard> readerTXT::parseFile(std::ifstream &file) {
    std::list<testCard> cardList;
    string s;
    getline(file, s);
    string quest, trueAn;
    vector <string> falseAn;
    while (!file.eof()) {
        for (int i = 4; i < s.length(); i++)
            quest += s[i];
        getline(file, s);
        for (int i = 4; i < s.length(); i++)
            trueAn += s[i];
        getline(file, s);
        stringstream f;
        while (s[1] == 'f' && s.length()>0 && !file.eof()) {
            for (int i = 4; i < s.length(); i++)
                f << s[i];
            falseAn.push_back(f.str());
            f.str("");
            f.clear();
            getline(file, s);
        }
        if(file.eof() && falseAn.size() < 3){
            for (int i = 4; i < s.length(); i++)
                f << s[i];
            falseAn.push_back(f.str());
        }
        testCard card(quest,trueAn,falseAn);
        cardList.push_back(card);
        quest = "";
        trueAn = "";
        falseAn.clear();
    }
    return cardList;
}