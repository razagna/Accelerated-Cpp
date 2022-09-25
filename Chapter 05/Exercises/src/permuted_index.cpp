#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "permuted_index.hpp"
#include "split.hpp"
using namespace std;

int shift(const vector<string>& v)
{  
    int count = 0, maxlen = 0;

    for (int i = 0; i != v.size(); ++i)
    {
        if(v[i].size() > maxlen)
        {
            maxlen = v[i].size();
            vector<string> s = split(v[i]);
            count = maxlen - s[s.size()].size();
        }
    }
        
    return count;
}

vector<string> rotate(const string& in)
{
    vector<string> ret;
    vector<string> s = split(in);
    
    string start = s[0], end = s[s.size()-1];
    int len = s.size();
    
    for(int i=0; i!= s.size(); ++i)
    {
        if(i!=0 && s[i] == start)
            break;
            
        string row;
        for(int j = i; j != len; ++j)
            row += s[j] + ' ';
            
        ret.push_back(row);
        s.push_back(s[i]);
        ++len;
    }
    
    return ret;
}

vector<string> unrotate(const string& in, const vector<string>& rot, int gap)
{
    vector<string> ret;
    vector<string> s = split(in);
    
    for(int i=0; i != rot.size(); ++i)
    {
        string start = split(rot[i])[0];
        int count = 0;
        string row;
        
        for(int j=0; j != s.size(); ++j)
        {
            if(s[j] == start)
            {
                count = row.size();
                row += "* ";                
            }
            
            row += s[j] + ' ';
        }

        row = string(gap - count, ' ') + row;
        ret.push_back(row);
    }
    
    return ret;
}

bool compare(const string& s1, const string& s2)
{
    int idx1, idx2;
    for(int i=0; i != s1.size(); ++i)
        if(s1[i] == '*')
            idx1 = i + 2;
            
    for(int i=0; i != s2.size(); ++i)
        if(s2[i] == '*')
            idx2 = i + 2;
            
   return s1[idx1] < s2[idx2];
}