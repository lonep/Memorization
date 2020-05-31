#pragma once
#include <iostream>
#include <string>
#include <vector>

class IO_Module{
public:
    void Menu();
    std::string get_path();
    std::string create_path();
    void show_card (TestCard card);
    char get_answer();
};