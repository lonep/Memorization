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
    std::string PATH;
public:
    void write(std::list<testCard*> testCards);
    std::list<testCard*>  read();
    bool getPATH(string s); //Возвращает 0 если путь некорректен и 1 если путь корректен.
                            //Если путь корректен, то PATH=s(путь пользователя)
};


#endif //MEMORIZATION_FILE_H
