#include "file_reader.h"
#include <iostream>
using namespace std;

void file_reader::open_file(string file_name)
{
    file_reader::file.open(file_name);
    file_reader::lines = vector<string>();
}

void file_reader::read_file()
{
    if (file_reader::file.is_open())
    {
        file_reader::file >> file_reader::data;
    }
}

void file_reader::read_lines()
{
    int i = 0;
    string line;

    if (file_reader::file.is_open())
    {
        while(getline(file_reader::file, line))
        {
            file_reader::lines.push_back(line);
            i++;
        }
    }
}

void file_reader::print_lines()
{
    for(int i = 0; i < file_reader::lines.size(); i++)
    {
        cout << file_reader::lines[i] << endl;
    }
}

void file_reader::close()
{
    file_reader::file.close();
    file_reader::lines.empty();
}
