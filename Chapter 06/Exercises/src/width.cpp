#include <vector>
#include <string>
#include <algorithm>
#include "width.hpp"
using namespace std;

string::size_type width(const vector<string>& v)
{  
    string::size_type maxlen = 0;
    for (vector<string>::const_iterator iter = v.begin(); iter != v.end(); ++iter)
        maxlen = max(maxlen, iter->size());
        
    return maxlen;
}