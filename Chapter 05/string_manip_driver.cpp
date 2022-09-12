#include <iostream>
#include <vector>
#include <string>
#include "split.h"
using namespace std;

void split_test()
{
    cout << endl << "Enter a sentence: ";

    string line;
    while(getline(cin, line))
    {
        vector<string> vec = split(line);

        for(vector<string>::const_iterator i = vec.begin(); i != vec.end(); ++i)
            cout << *i << endl;
    }
}

int main()
{
    split_test();

    return 0;
}