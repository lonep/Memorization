#include <iostream>
#include <fstream>
#include "readerTXT.h"
#include "readerJSON.h"
#include "file.h"
int main() {
writerJSON writers;
string PATH = "writetest.json";
ofstream file;
file.open(PATH);
list<testCard*> testCards;
testCard *test = new testCard;
    testCard *test1 = new testCard;
test->question = "2*2";
test->trueAn = "4";
test->falseAn.push_back("6");
test->falseAn.push_back("8");
testCards.push_back(test);
    test1->question = "3*3";
    test1->trueAn = "9";
    test1->falseAn.push_back("1");
    test1->falseAn.push_back("2");
    testCards.push_back(test1);
writers.write(file,testCards);
file.close();

ifstream rd;
rd.open(PATH);
readerJSON read;
read.parseFile(rd);
}
