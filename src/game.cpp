#include "game.h"
#include "file_reader.h"

void game::init()
{
    game::questions_start_file = file_reader.open_file("data/questions/questions_start.txt");
    game::questions_start = file_reader.read_lines();
}
