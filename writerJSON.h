//
// Created by Vladimir on 5/28/2020.
//

#ifndef MEMORIZATION_WRITERJSON_H
#define MEMORIZATION_WRITERJSON_H

#include "writer.h"
#include <fstream>

class writerJSON: public writer{
public:
    void setPATH(std::string str) override;
    void write() override;
};


#endif //MEMORIZATION_WRITERJSON_H
