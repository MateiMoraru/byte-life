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
    game::character.init();
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
    vector<string> player_data = game::character.data;
    player &character = game::character;

    for(int i = 0; i < game::questions_start.size(); i++)
    {
        game::ask_question(game::questions_start, i);
        game::character.add_data(game::response);
    }

    cout << player_data[character.name] << " was born!" << endl;
}
