//
// Created by Vladimir on 5/28/2020.
//

#include "writerJSON.h"
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/ostreamwrapper.h"
using namespace rapidjson;
void writerJSON::write(std::ofstream &file, std::list<testCard*> &testCards) {
    Document doc;
    doc;
    doc.SetObject();
    Document::AllocatorType& allocator = doc.GetAllocator();
    Value object(kObjectType);
    Value question;
    Value falseAn(kArrayType);
    Value fl;
    Value array(kArrayType);
    array.SetArray();
    short size = testCards.size();
     for (int i = 0; i < size; i++){
         object.SetObject();
         bool s = object.IsObject();
         object.RemoveAllMembers();
         question.SetString(testCards.back()->question.c_str(),allocator);
         object.AddMember("question", question,allocator);

         question.SetString(testCards.back()->trueAn.c_str(),allocator);
         object.AddMember("true", question,allocator);

         for(int j = 0; j <  testCards.back()->falseAn.size(); j++) {
            falseAn.SetArray();
             fl.SetString(testCards.back()->falseAn[j].c_str(), allocator);
             falseAn.PushBack(fl, allocator);
         }
         object.AddMember("false", falseAn, allocator);
         array.PushBack(object, allocator);
         delete testCards.back();
         testCards.pop_back();
     }
     bool s = doc.IsObject();
     doc.AddMember("cards",array,allocator);
     OStreamWrapper osw(file);
     Writer<OStreamWrapper> writer(osw);
     doc.Accept(writer);
    }

