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
    doc.SetArray();
    Document::AllocatorType& allocator = doc.GetAllocator();
    Value object(kObjectType);
    Value question;
    Value falseAn(kArrayType);
    Value fl;

     for (int i = 0; i < testCards.size(); i++){
         question.SetString(testCards.back()->question.c_str(),allocator);
         object.AddMember("question", question,allocator);

         question.SetString(testCards.back()->trueAn.c_str(),allocator);
         object.AddMember("true", question,allocator);

         for(int j = 0; j <  testCards.back()->falseAn.size(); j++) {
             fl.SetString(testCards.back()->falseAn[j].c_str(), allocator);
             falseAn.PushBack(fl, allocator);
         }
         object.AddMember("false", falseAn, allocator);
         doc.PushBack(object, allocator);
         delete testCards.back();
         testCards.pop_back();
     }
    }

