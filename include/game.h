#ifndef GAME_H
#define GAME_H
#include <vector>
#include <iostream>
#include "file_reader.h"
class game
{
    public:
        void init();

        std::vector<std::string> questions_start;
        file_reader questions_start_file;
};

#endif // GAME_H
