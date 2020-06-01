//
// Created by Vladimir on 5/28/2020.
//

#ifndef MEMORIZATION_WRITER_H
#define MEMORIZATION_WRITER_H

#include <fstream>
#include <string>
#include "testCard.h"
#include <list>

class writer {
public:
    virtual void write(std::ofstream &file, std::list<testCard*> &testCards) = 0;
};


#endif //MEMORIZATION_WRITER_H
