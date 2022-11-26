#include <fstream>
#include <vector>
#include <list>
#include "read_file.hpp"
#include "Student_info.hpp"
using namespace std;

int read_file(string filename, vector<Student_info>& students)
{
    ifstream input_file("..\\" + filename);
    if(!input_file.is_open())
        return EXIT_FAILURE;

    Student_info record;  
    while (read(input_file, record))
        students.push_back(record);

    return EXIT_SUCCESS;
}

int read_file(string filename, list<Student_info>& students)
{
    ifstream input_file("..\\" + filename);
    if(!input_file.is_open())
        return EXIT_FAILURE;

    Student_info record;  
    while (read(input_file, record))
        students.push_back(record);

    return EXIT_SUCCESS;
}