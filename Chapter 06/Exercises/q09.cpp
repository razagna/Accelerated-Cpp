#include <iostream>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <vector>
#include <string>
using namespace std;

string accumulate_concat(const vector<string>& v)
{
    string ret = accumulate(v.begin(), v.end(), string());
    return ret;
}

string copy_concat(const vector<string>& v)
{
    string ret;
    vector<string>::const_iterator last = v.end()-1;
    for(vector<string>::const_iterator iter = v.begin(); iter != last; ++iter)
    {
        copy(iter->begin(), iter->end(), back_inserter(ret));
        ret += ' ';
    }

    copy(last->begin(), last->end(), back_inserter(ret));
    ret += '.';

    return ret;
}

int main()
{
    vector<string> v = {"Hi", "my", "name", "is", "Razan"};

    cout << "Concatenation through 'accumulate': " << accumulate_concat(v) << endl;
    cout << "Concatenation through 'copy': " << copy_concat(v) << endl;

    return 0;
}