//
// Created by lonep on 22-May-20.
//
#include <iostream>
#include "txtParser.h"
#include <string>
#include <list>

testCard txtParser::parseFile(std::ifstream &file) {
     std::list <testCard> cardList;

     q = ("^<q> (.*)");
     t = ("^<t> (.*)");
     f = ("^<f> (.*)");
     string s;
        getline(file, s);
        if (regex_search(s,q)){
            testCard *test = new testCard;
            for(int i = 4; i < s.length(); i++){
                test->question += s[i];
            }
            getline(file, s);
            if(regex_search(s,t)){
                for(int i = 4; i < s.length(); i++){
                    test->trueAn += s[i];
            }
                getline(file, s);
                while (regex_search(s,f)){
                    for(int i = 4; i < s.length(); i++){
                        string a;
                        a += s[i];
                        test->falseAn.push_back(a);
                    }
                }
            }
        }

   cout << cardList.back().question << '\n';
   cout << cardList.back().trueAn << '\n';
   for (int i = 0; i < cardList.back().falseAn.size(); i++) {
       cout << cardList.back().falseAn[i] << '\n';
   }
}
