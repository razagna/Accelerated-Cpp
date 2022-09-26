#include <iostream>
#include <vector>
#include <string>
#include "width.hpp"
#include "frame.hpp"
using namespace std;

vector<string> hcat(vector<string>& left, vector<string>& right)
{
    vector<string> ret;
    string::size_type pad = width(left);
    vector<string>::size_type i=0, j=0;

    string s;
    while(i != left.size() || j != right.size())
    {       
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

int main()
{
	vector<string> p1 = frame({"this is an", "example", "to illustrate", "framing"});
	vector<string> p2 = frame({"this is", "just a test", "to see", "if hcat", "works as", "expected"});
	
	vector<string> v = hcat(p2, p1);
    
	for(int i=0; i != v.size(); ++i)
    	cout << v[i] << endl;

	return 0;
}