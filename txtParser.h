//
// Created by lonep on 22-May-20.
//

#ifndef MEMORIZATION_TXTPARSER_H
#define MEMORIZATION_TXTPARSER_H
#include "parser.h"
#include <fstream>
#include <regex>
#include <string>
using namespace std;
class txtParser: public parser {
public:
    testCard parseFile(std::ifstream &file) override;
    std::regex q("^/q (.*)"); //question

    std::regex t; //true
    std::regex f; //false
    std::regex a("a");

};


#endif //MEMORIZATION_TXTPARSER_H
