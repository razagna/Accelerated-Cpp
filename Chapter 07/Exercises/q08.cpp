#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include "xref.hpp"
#include "find_URLs.hpp"
using namespace std;

int main()
{
    ifstream input_file("../data/urls.txt");
    map<string, vector<int> > ret = xref(input_file, find_url);

    for (map<string, vector<int> >::const_iterator it = ret.begin(); it != ret.end(); ++it) 
    {
        vector<int>::const_iterator line_it = it->second.begin();
        cout << it->first << " occurs on line(s): " << *line_it++;

        while (line_it != it->second.end())
            cout << ", " << *line_it++;

        cout << endl;
    }
    return 0;
}