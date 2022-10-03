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
     
    for (vector<string>::const_iterator iter = v.begin(); iter != v.end(); ++iter)
        ret.push_back( "* " + *iter + string(maxlen - iter->size(), ' ') + " *") ;
    
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
    vector<string>::const_iterator i = left.begin(), j = right.begin();

    while(i != left.end() || j != right.end())
    {      
       string s;
        
        if(i != left.end())
            s += *i++;
        else
            s += pad;
        
        if(j != right.end())
            s += *j++;
            
        ret.push_back(s);
    }
    
    return ret;
}
