//
// Created by Vladimir on 5/28/2020.
//

#ifndef MEMORIZATION_WRITERTXT_H
#define MEMORIZATION_WRITERTXT_H

#include "writer.h"
#include <fstream>
#include <string>

class writerTXT: public writer {
public:
    void setPATH(std::string str);
    void write(std::ofstream &file, std::list<testCard> &testCards) override;

};


#endif //MEMORIZATION_WRITERTXT_H
