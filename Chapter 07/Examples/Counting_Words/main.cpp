#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main() 
{
	map<string, int> counters;
	
	cout << "Enter a sentence: ";

	string s;
	while (cin >> s)
		++counters[s];

	for(map<string, int>::const_iterator iter = counters.begin();
		iter != counters.end(); ++iter)
		cout << iter->first << "\t" << iter->second << endl;
	
	return 0;
}
