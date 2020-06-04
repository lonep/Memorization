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
    std::string PATH; // путь к файлу
    bool mode; // .json/.txt обработка
public:
    void write(std::list<testCard> testCards);
    static bool isPATHCorrect(std::string path);
    std::list<testCard*> read();
};


#endif //MEMORIZATION_FILE_H
