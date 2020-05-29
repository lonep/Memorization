//
// Created by lonep on 29-May-20.
//

#include "parserJSON.h"
#include "rapidjson/document.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include "testCard.h"
#include "rapidjson/istreamwrapper.h"
#include "rapidjson/reader.h"
using namespace rapidjson;
std::list<testCard*> parserJSON::parseFile(std::ifstream &file) {
    Document doc;
    IStreamWrapper js(file);
    doc.ParseStream(js);
    assert(doc["name"].IsString());
    std::string s = doc["name"].GetString();
}