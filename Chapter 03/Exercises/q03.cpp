#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    cout << "Please enter a sentence followed by EOF:" << endl;

    string input;
    vector<string> words;
    while(cin >> input)
        words.push_back(input);

    for(int i = 0; i != words.size(); ++i)
    {
        int count = 0;
        string current = words[i];
        for(int j = 0; j != words.size(); ++j)
            if(words[j] == current)
                ++count;
        
        cout << current << " occurs " << count << " times." << endl;
    }
}