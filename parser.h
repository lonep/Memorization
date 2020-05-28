//
// Created by lonep on 22-May-20.
//

#ifndef UNTITLED1_PARSER_H
#define UNTITLED1_PARSER_H
#include "testCard.h"
#include <fstream>
#include <list>
class parser {
public:
    virtual std::list<testCard*> parseFile(std::ifstream &file) = 0;
};


#endif //UNTITLED1_PARSER_H
