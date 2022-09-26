#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "split.hpp"
using namespace std;

#include <cctype>

void case_sort(vector<string>& s)
{
    vector<string> capital, lower;
    for(vector<string>::const_iterator iter = s.begin(); iter != s.end(); ++iter)
    {
        if(isupper((*iter)[0]))
            capital.push_back(*iter);
        else
            lower.push_back(*iter);
    }

    lower.insert(lower.end(), capital.begin(), capital.end());
    s = lower;   
}

int main()
{
	string in = "this Is An example To illustrate lower to Upper sorting";
	
	vector<string> s = split(in);
    vector<string> s2 = split(in);

    sort(s.rbegin(), s.rend());
	for(vector<string>::const_iterator iter = s.begin(); iter != s.end(); ++iter)
	    cout << *iter << ' ';

    cout << endl;
    
    case_sort(s2);
    for(vector<string>::const_iterator iter = s2.begin(); iter != s2.end(); ++iter)
	    cout << *iter << ' ';
	    
	return 0;	
}
