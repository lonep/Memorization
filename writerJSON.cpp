//
// Created by Vladimir on 5/28/2020.
//

#include "writerJSON.h"
#include "rapidjson/document.h"
#include "rapidjson/istreamwrapper.h"
using namespace rapidjson;
std::list<testCard*> writerJSON::write(std::ofstream file, std::list<testCard*> testCards) {
    Document doc;
    doc.SetArray();
    Document::AllocatorType& allocator = doc.GetAllocator();
    for (int i = 0; i < testCards.size(); i++){
        Value array;
        array.SetArray();
        array.AddMember("question", testCards.back()->question, allocator);
        doc[i].AddMember("question", array ,allocator);
        }

    }

