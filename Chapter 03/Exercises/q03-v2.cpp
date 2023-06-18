#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Please enter a sentence followed by EOF:" << endl;

    vector<string> words;
    vector<int> count;
    string input;
    while(cin >> input)
    {
        auto result = find(words.begin(), words.end(), input);
        if(result == words.end())
        {
            count.push_back(1);
            words.push_back(input);
        }
        else
            ++count[std::distance(words.begin(), result)];
    }

    for(int i = 0; i != words.size(); ++i)
    {
        cout << "Word " << words[i] << " occurs " << count[i] << " times." << endl;
    }
}