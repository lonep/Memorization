#include <iostream>
#include <fstream>
#include "parserTXT.h"
#include "parserJSON.h"
int main() {
    ifstream js;
    js.open("testfile.json");
    cout << js.is_open() << '\n';
    parserJSON paser;
    paser.parseFile(js);
    js.close();
}
