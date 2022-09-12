#include <vector>
#include <cctype>
#include <string>
#include "split.h"
using namespace std;

vector<string> split(const string& sentence)
{
    vector<string> ret;
    string::size_type i = 0;

    while(i != sentence.size())
    {
        while(i != sentence.size() && isspace(sentence[i]))
            ++i;

        string::size_type j = i;

        while(j != sentence.size() && !isspace(sentence[i]))
            ++j;

        if(i != j)
        {
            ret.push_back(sentence.substr(i, j-i));
            i = j;
        }
    }

    return ret;
}