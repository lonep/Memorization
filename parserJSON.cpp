//
// Created by lonep on 29-May-20.
//

#include "parserJSON.h"
#include "rapidjson/document.h"
#include <iostream>
#include "testCard.h"
#include "rapidjson/istreamwrapper.h"
using namespace rapidjson;
std::list<testCard*> parserJSON::parseFile(std::ifstream &file) {
    std::list<testCard*> testCards;
    Document doc;
    IStreamWrapper js(file);
    doc.ParseStream(js);
    for(short i = 0; i < doc["cards"].Size(); i++ ){
        testCard *card = new testCard;
        card->question = doc["cards"][i]["question"].GetString();
        card->trueAn = doc["cards"][i]["true"].GetString();
        for (int j = 0; j < doc["cards"][i]["false"].Size(); j++){
            card->falseAn.push_back(doc["cards"][i]["false"][j].GetString());
        }
        testCards.push_back(card);
    }
    return testCards;
}