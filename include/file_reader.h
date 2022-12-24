#ifndef FILE_READER_H
#define FILE_READER_H
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class file_reader
{
    public:
        ifstream file;
        string data;
        vector<string> lines;

        void read_file();
        void open_file(string file_name);
        void read_lines();
        void print_lines();
        void close();
};

#endif // FILE_READER_H
