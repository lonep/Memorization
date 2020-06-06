//
// Created by lonep on 29-May-20.
//

#include "readerJSON.h"
#include "rapidjson/document.h"
#include <iostream>
#include "testCard.h"
#include "rapidjson/istreamwrapper.h"

using namespace rapidjson;
std::list<testCard> readerJSON::parseFile(std::ifstream &file) {
    std::list<testCard> testCards;
    Document doc;
    IStreamWrapper js(file);
    doc.ParseStream(js);
    std::string quest, trueAn;
    std::vector <std::string> falseAn;
    for(short i = 0; i < doc["cards"].Size(); i++ ){
        quest = doc["cards"][i]["question"].GetString();
        trueAn = doc["cards"][i]["true"].GetString();
        if(doc["cards"][i].HasMember("false")) {
            for (int j = 0; j < doc["cards"][i]["false"].Size(); j++) {
                falseAn.push_back(doc["cards"][i]["false"][j].GetString());
            }
        }
        testCard card(quest,trueAn,falseAn);
        testCards.push_back(card);
        quest = "";
        trueAn= "";
        falseAn.clear();
    }
    return testCards;
}