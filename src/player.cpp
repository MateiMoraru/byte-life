#include "player.h"
#include <chrono>
#include <ctime>
using namespace std;

void player::init()
{
    player::set_date();
}

void player::add_data(string d)
{
    player::data.push_back(d);
}

void player::set_date()
{
    time_t t = time(0);
    tm* now = localtime(&t);

    player::year = (now->tm_year + 1900);
    player::month = (now->tm_mon + 1);
    player::day = now->tm_mday;
}
