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
protected:
    //std::string PATH;
    //testCard card;
public:
    //virtual void setPATH(std::string path) = 0;
    virtual std::list<testCard*> write(std::ofstream file, std::list<testCard*> testCards) = 0;
};


#endif //MEMORIZATION_WRITER_H
