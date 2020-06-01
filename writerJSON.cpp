//
// Created by Vladimir on 5/28/2020.
//

#include "writerJSON.h"
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/istreamwrapper.h"
using namespace rapidjson;
std::list<testCard*> writerJSON::write(std::ofstream file, std::list<testCard*> testCards) {
    Document doc;
    std::string s = "kek";
   Document::AllocatorType& allocator = doc.GetAllocator();
   doc.AddMember("hello",s, allocator);
    }

