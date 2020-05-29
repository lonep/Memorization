//
// Created by lonep on 22-May-20.
//
#ifndef MEMORIZATION_PARSERTXT_H
#define MEMORIZATION_PARSERTXT_H
#include "parser.h"
#include <fstream>
#include <string>
#include <list>
using namespace std;
class parserTXT: public parser {
public:
    std::list<testCard*> parseFile(std::ifstream &file) override;
};


#endif //MEMORIZATION_PARSERTXT_H
