//
// Created by Vladimir on 5/28/2020.
//

#ifndef MEMORIZATION_FILE_H
#define MEMORIZATION_FILE_H

#include "writerJSON.h"
#include "writerTXT.h"
#include "testCard.h"
//#include "readerJSON.h"
//#include "readerTXT.h"
#include <list>

class file {
protected:
    std::string PATH;
    writer* WRITER;
    //reader* READER;
    std::list<testCard> QUESTIONS;
public:
    void transferToManager();
};


#endif //MEMORIZATION_FILE_H
