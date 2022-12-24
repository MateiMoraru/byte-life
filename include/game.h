#ifndef GAME_H
#define GAME_H
#include <vector>
#include <iostream>
#include "file_reader.h"
class game
{
    public:
        void init();
        void start();
        void ask_question(std::vector<std::string> q, int i);

        std::vector<std::string> questions_start;
        file_reader file;
        string response;
};

#endif // GAME_H
