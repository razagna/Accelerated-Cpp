#include <iostream>
#include <vector>
#include "find_URLs.hpp"
using namespace std;

int main()
{
    string s = ":// hi my m://h5 is not hok://summer like ://pig it was t://co?li is my lol ://";
    vector<string> urls = find_url(s);

    for (vector<string>::const_iterator iter = urls.begin(); iter != urls.end(); ++iter)
        cout << *iter << endl;
    

    return 0;
}
