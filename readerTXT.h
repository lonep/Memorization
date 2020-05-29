//
// Created by lonep on 22-May-20.
//
#ifndef MEMORIZATION_READERTXT_H
#define MEMORIZATION_READERTXT_H
#include "reader.h"
#include <fstream>
#include <string>
#include <list>
using namespace std;
class readerTXT: public reader {
public:
    std::list<testCard*> parseFile(std::ifstream &file) override;
};


#endif //MEMORIZATION_READERTXT_H
