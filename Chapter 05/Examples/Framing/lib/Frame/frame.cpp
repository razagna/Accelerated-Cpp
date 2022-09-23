#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "width.hpp"
#include "frame.hpp"
using namespace std;

vector<string> frame(const vector<string>& v) 
{  
    vector<string> ret;
    string::size_type maxlen = width(v);
    string border(maxlen + 4, '*');
   
     ret.push_back(border);
     
    for (vector<string>::size_type i = 0; i != v.size(); ++i)
        ret.push_back( "* " + v[i] + string(maxlen - v[i].size(), ' ') + " *") ;
    
    ret.push_back(border);
    
    return ret;
}

vector<string> vcat(const vector<string>& top, const vector<string>& bottom)
{
   vector<string> ret(top);
       
   ret.insert(ret.end(), bottom.begin(), bottom.end());
   
   return ret;   
}

vector<string> hcat(vector<string>& left, vector<string>& right)
{
    vector<string> ret;
    string::size_type pad = width(left);
    vector<string>::size_type i=0, j=0;

    while(i != left.size() || j != right.size())
    {      
       string s;
        
        if(i != left.size())
            s += left[i++];
        else
            s += pad;
        
        if(j != right.size())
            s += right[j++];
            
        ret.push_back(s);
    }
    
    return ret;
}