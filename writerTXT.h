//
// Created by Vladimir on 5/28/2020.
//

#ifndef MEMORIZATION_WRITERTXT_H
#define MEMORIZATION_WRITERTXT_H

#include "writer.h"

class writerTXT: public writer {
public:
    void setPATH(std::string str) override;
    void write() override;
};


#endif //MEMORIZATION_WRITERTXT_H
