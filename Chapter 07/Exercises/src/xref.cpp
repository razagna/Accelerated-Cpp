#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include "xref.hpp"
using namespace std;

map<string, vector<int> > xref(istream& in, vector<string> find_words(const string&))
{
    string line;
    int line_number = 0;
    map<string, vector<int> > ret;

    while(getline(in, line))
    {
        ++line_number;

        vector<string> words = find_words(line);
        for(vector<string>::const_iterator iter = words.begin(); iter != words.end(); ++iter)
        {
            vector<int> line_numbers = ret[*iter];
            if(find(line_numbers.begin(), line_numbers.end(), line_number) == line_numbers.end())
                ret[*iter].push_back(line_number);
        }
            
    }

    return ret;
}