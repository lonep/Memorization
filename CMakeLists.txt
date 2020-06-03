cmake_minimum_required(VERSION 3.16)
project(memorization)

set(CMAKE_CXX_STANDARD 20)

add_executable(memorization main.cpp reader.h testCard.h readerTXT.cpp readerTXT.h rapidjson readerJSON.cpp readerJSON.h testCard.cpp)