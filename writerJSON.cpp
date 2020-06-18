//
// Created by Vladimir on 5/28/2020.
//

#include "writerJSON.h"
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/ostreamwrapper.h"
using namespace rapidjson;
void writerJSON::write(std::ofstream &file, std::list<testCard> &testCards) {
    Document doc;
    doc;
    doc.SetObject();
    Document::AllocatorType& allocator = doc.GetAllocator();


    Value falseAn(kArrayType);

    Value array(kArrayType);
    array.SetArray();
    short size = testCards.size();
    Value question;
     for (int i = 0; i < size; i++){
         Value object(kObjectType);
         object.SetObject();
         bool s = object.IsObject();
         object.RemoveAllMembers();
         question.SetString(testCards.back().get_question().c_str(),allocator);
         object.AddMember("question", question,allocator);
         question.SetString(testCards.back().get_trueAnswer().c_str(),allocator);
         object.AddMember("true", question,allocator);
         falseAn.SetArray();
         question.SetString("", allocator);
         for(int j = 0; j <  testCards.back().get_falseAnswer().size(); j++) {
             Value fl;
             fl.SetString(testCards.back().get_falseAnswer()[j].c_str(), allocator);
             falseAn.PushBack(fl, allocator);
         }
         object.AddMember("false", falseAn, allocator);
         array.PushBack(object, allocator);
         testCards.pop_back();
     }
     bool s = doc.IsObject();
     doc.AddMember("cards",array,allocator);
     OStreamWrapper osw(file);
     Writer<OStreamWrapper> writer(osw);
     doc.Accept(writer);
    }

