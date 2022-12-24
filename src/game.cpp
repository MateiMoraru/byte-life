#include "game.h"
#include "file_reader.h"
#include <iostream>
using namespace std;

void game::init()
{
    game::file = file_reader();
    game::file.open_file("data\\questions\\questions_start.txt");
    game::file.read_lines();

    game::questions_start = game::file.lines;

    game::character = player();
}

void game::ask_question(vector<string> q, int i)
{
    cout << "Q: " <<  q[i] << endl << "A: ";
    string res;

    cin >> res;
    cout << endl;

    game::response = res;
}

void game::start()
{
    for(int i = 0; i < game::questions_start.size(); i++)
    {
        game::ask_question(game::questions_start, i);
        game::character.add_data(game::response);
    }

    cout << game::character.data[3] << " was born in " << game::character.data[0] << "!" << endl;
}
