//
// Created by Vladimir on 5/28/2020.
//

#ifndef MEMORIZATION_FILE_H
#define MEMORIZATION_FILE_H

#include "writerJSON.h"
#include "writerTXT.h"
#include "testCard.h"
#include "readerJSON.h"
#include "readerTXT.h"
#include <list>


class file {
protected:
    std::string PATH;
    std::list<testCard*> testCards;
public:
        //TODO transerToManager
    void transferToManager();
    void write();
    void read();
    void getPATH(string s);
};


#endif //MEMORIZATION_FILE_H
