#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <vector>
using namespace std;

class player
{
    public:
        player()
        {

        };
        vector<string> data;

        int nationality = 0;
        int wealth = 1;
        int sex = 2;
        int name = 3;

        int age = 0;
        int money = 0;

        int year;
        int month;
        int day;

        void init();
        void set_date();
        void add_data(string d);

};

#endif // PLAYER_H
