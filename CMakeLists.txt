cmake_minimum_required(VERSION 3.16)
project(memorization)

set(CMAKE_CXX_STANDARD 20)

add_executable(memorization main.cpp reader.h testCard.h readerTXT.cpp readerTXT.h rapidjson file.h writerJSON.h writerJSON.cpp file.cpp readerJSON.cpp readerJSON.h testCard.cpp IO_Module.h IO_Module.cpp )