//
// Created by lonep on 22-May-20.
//
#ifndef MEMORIZATION_TXTPARSER_H
#define MEMORIZATION_TXTPARSER_H
#include "parser.h"
#include <fstream>
#include <string>
#include <list>
using namespace std;
class txtParser: public parser {
public:
    std::list<testCard*> parseFile(std::ifstream &file) override;
};


#endif //MEMORIZATION_TXTPARSER_H
