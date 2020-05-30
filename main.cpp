#include <iostream>
#include <fstream>
#include "readerTXT.h"
#include "readerJSON.h"
int main() {
   ifstream js;
   js.open("testfile.json");
   readerJSON red;
   red.parseFile(js);
   js.close();
}
