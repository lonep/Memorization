cmake_minimum_required(VERSION 3.16)
project(memorization)

set(CMAKE_CXX_STANDARD 20)

add_executable(memorization main.cpp parser.h testCard.h txtParser.cpp txtParser.h rapidjson)