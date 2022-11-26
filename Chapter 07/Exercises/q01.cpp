#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main ()
{
    map<string, int> counter;
    ifstream file("../data/sample.txt");
    string word;

    while(file >> word)
        ++counter[word];

    map<int, vector<string> > occur;
    for(map<string, int>::const_iterator iter = counter.begin(); iter != counter.end(); ++iter)
        occur[iter->second].push_back(iter->first);

    for(map<int, vector<string> >::const_iterator iter = occur.begin(); iter != occur.end(); ++iter) 
    {
        vector<string>::const_iterator it = iter->second.begin();
        cout << iter->first << ": \t" << *it++;

        while(it != iter->second.end())
            cout << ", " << *it++;

        cout << endl;
    }
    
    return 0;
}