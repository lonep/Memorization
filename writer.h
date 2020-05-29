//
// Created by Vladimir on 5/28/2020.
//

#ifndef MEMORIZATION_WRITER_H
#define MEMORIZATION_WRITER_H

#include <fstream>
#include <string>
#include <list>
#include "testCard.h"

class writer {
protected:
    std::string PATH;
    std::list<testCard> cards;
public:
    virtual void setPATH(std::string path) = 0;
    virtual void setCARDS() = 0;
    virtual void write() = 0;
};


#endif //MEMORIZATION_WRITER_H
