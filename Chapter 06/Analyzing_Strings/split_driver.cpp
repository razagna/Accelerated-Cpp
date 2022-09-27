#include <iostream>
#include <vector>
#include "split.hpp"
using namespace std;

int main()
{
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    vector<string> res = split(s);
    for (vector<string>::const_iterator iter = res.begin(); iter != res.end(); ++iter)
        cout << *iter << endl;

    return 0;
}
