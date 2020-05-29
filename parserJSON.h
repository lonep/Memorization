//
// Created by lonep on 29-May-20.
//

#ifndef MEMORIZATION_PARSERJSON_H
#define MEMORIZATION_PARSERJSON_H

#include "parser.h"
class parserJSON: public parser {
public:
    std::list<testCard*> parseFile(std::ifstream &file) override;
};


#endif //MEMORIZATION_PARSERJSON_H
