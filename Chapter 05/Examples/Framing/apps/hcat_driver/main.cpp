#include <iostream>
#include <vector>
#include <string>
#include "frame.hpp"
using namespace std;

int main()
{
	vector<string> p1 = frame({"this is an", "example", "to illustrate", "framing"});
	vector<string> p2 = frame({"this is", "just a test", "to see", "if cat", "works as", "expected"});
	
	vector<string> v = hcat(p2, p1);
    
	for(int i=0; i != v.size(); ++i)
    	cout << v[i] << endl;

	return 0;
}