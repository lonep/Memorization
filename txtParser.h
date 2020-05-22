//
// Created by lonep on 22-May-20.
//

#ifndef MEMORIZATION_TXTPARSER_H
#define MEMORIZATION_TXTPARSER_H
#include "parser.h"
#include <fstream>
#include <regex>
class txtParser: public parser {
public:
    testCard parseFile(std::ofstream &file) override;

};


#endif //MEMORIZATION_TXTPARSER_H
