#include <iostream>
#include <fstream>
#include "txtParser.h"
int main() {
    std::ifstream obj("test.txt");
    bool p = obj.is_open();
    txtParser lol;
    lol.parseFile(obj);
    obj.close();
    return 0;
}
