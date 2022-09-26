#include <iostream>
#include <vector>
#include <string>
#include "frame.hpp"
using namespace std;

int main()
{
	vector<string> v;
	vector<string> vec = frame(v);

	for(vector<string>::const_iterator iter = vec.begin(); iter != vec.end(); ++iter)
    	cout << *iter << endl;	    

	return 0;
}