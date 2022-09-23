#include <iostream>
#include <vector>
#include <string>
#include "frame.hpp"
using namespace std;

int main()
{
	vector<string> v = frame({"this is an", "example", "to illustrate", "framing"});

	for(int i=0; i != v.size(); ++i)
    	cout << v[i] << endl;	    

	return 0;
}