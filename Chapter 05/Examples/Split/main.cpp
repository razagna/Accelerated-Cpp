#include <iostream>
#include <vector>
#include <string>
#include "split.hpp"
using namespace std;

int main() 
{
	cout << "Please enter a sentence: ";
	string s;
	while (getline(cin, s))
	{
		vector<string> v = split(s);

		for (vector<string>::size_type i = 0; i != v.size(); ++i)
			cout << v[i] << endl;
	}
	
	return 0;
}
