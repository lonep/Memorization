//
// Created by lonep on 29-May-20.
//

#ifndef MEMORIZATION_READERJSON_H
#define MEMORIZATION_READERJSON_H

#include "reader.h"
class readerJSON: public reader {
public:
    std::list<testCard> parseFile(std::ifstream &file) override;
};


#endif //MEMORIZATION_READERJSON_H
