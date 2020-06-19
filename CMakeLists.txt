cmake_minimum_required(VERSION 3.16)
project(memorization)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_LIBRARIES "-static-libgcc -static-libstdc++ -lwsock32 -lws2_32 ${CMAKE_CXX_STANDARD_LIBRARIES}")

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive")
add_executable(memorization Sources/main.cpp Headers/reader.h Headers/testCard.h Headers/Mixer.h Sources/Mixer.cpp Sources/readerTXT.cpp Headers/readerTXT.h rapidjson Headers/file.h Headers/writerJSON.h Sources/writerJSON.cpp Sources/file.cpp Sources/readerJSON.cpp Headers/readerJSON.h Sources/testCard.cpp Sources/writerTXT.cpp Headers/writerJSON.h Sources/IO_Module.cpp Headers/IO_Module.h Headers/TestManager.h Sources/TestManager.cpp)