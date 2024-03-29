#include <vector>
#include <string>
#include <algorithm>
#include "width.hpp"
using namespace std;

string::size_type width(const vector<string>& v)
{  
    string::size_type maxlen = 0;
    for (vector<string>::size_type i = 0; i != v.size(); ++i)
        maxlen = max(maxlen, v[i].size());
        
    return maxlen;
}