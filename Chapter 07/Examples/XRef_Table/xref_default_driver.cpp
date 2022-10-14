#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "open_file.hpp"
#include "xref.hpp"
using namespace std;

int main()
{
    try
    {
        ifstream input_file("..\\data\\sample.txt");
        map<string, vector<int> > res = xref(open_file(input_file));
        for(map<string, vector<int> >::const_iterator iter = res.begin();
		    iter != res.end(); ++iter)
		{
            vector<int>::const_iterator v_iter = iter->second.begin();   
            cout << iter->first << "\t" << *v_iter++;
            while(v_iter != iter->second.end())
                cout << ", " << *v_iter++;
            cout << endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}