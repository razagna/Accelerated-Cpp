#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include "xref.hpp"
using namespace std;

int main()
{
    ifstream input_file("../data/long_sample.txt");
    map<string, vector<int> > ret = xref(input_file);

    for (map<string, vector<int> >::const_iterator it = ret.begin(); it != ret.end(); ++it) 
    {
        vector<int>::const_iterator line_it = it->second.begin();
        cout << "\"" << it->first << "\"" << " occurs on line(s): " << *line_it++;

        int count = 1;
        while (line_it != it->second.end())
        {
            count % 5 == 0 ? cout << endl : cout << ", ";
            cout << *line_it++;
            ++count;
        }
        
        cout << endl;
        
    }
    
}