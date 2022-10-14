#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "open_file.hpp"
#include "find_URLs.hpp"
#include "xref.hpp"
using namespace std;

int main()
{
    try
    {
        ifstream input_file("..\\data\\urls.txt");
        map<string, vector<int> > res = xref(open_file(input_file), find_url);
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