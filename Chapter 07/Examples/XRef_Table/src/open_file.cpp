#include <fstream>
#include "open_file.hpp"
using namespace std;

ifstream& open_file(ifstream& input_file)
{
    if(!input_file.is_open())
        throw domain_error("Couldn't open file!");

    return input_file;
}