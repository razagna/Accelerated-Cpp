#include <iostream>
#include <vector>
#include <string>
#include "width.hpp"
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

int main()
{
	vector<string> p1 = frame({"this is an", "example", "to illustrate", "framing"});
	vector<string> p2 = frame({"this is", "just a test", "to see", "if cat", "works as", "expected"});
	
	vector<string> v = hcat(p2, p1);
    
	for (vector<string>::const_iterator iter = v.begin(); iter != v.end(); ++iter)
    	cout << *iter << endl;

	return 0;
}