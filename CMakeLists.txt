cmake_minimum_required(VERSION 3.16)
project(memorization)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_LIBRARIES "-static-libgcc -static-libstdc++ -lwsock32 -lws2_32 ${CMAKE_CXX_STANDARD_LIBRARIES}")

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive")
add_executable(memorization main.cpp reader.h testCard.h mixer.h mixer.cpp readerTXT.cpp readerTXT.h rapidjson file.h writerJSON.h writerJSON.cpp file.cpp readerJSON.cpp readerJSON.h testCard.cpp writerTXT.cpp writerJSON.h IO_Module.cpp IO_Module.h TestManager.h TestManager.cpp )