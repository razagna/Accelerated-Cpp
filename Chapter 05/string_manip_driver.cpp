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

vector<string> frame(const vector<string>& vec)
{
    vector<string> result;

    // find longest word
    string::size_type maxlen = 0;
    for(vector<string>::size_type i = 0; i != vec.size(); ++i)
        maxlen = max(maxlen, vec[i].size());

    // add top border = longest + 4
    string border(maxlen + 4, '*');
    result.push_back(border);

    // find difference between longest and current
    for(vector<string>::size_type i = 0; i != vec.size(); ++i)
        result.push_back("* " + vec[i] + string(maxlen - vec[i].size(), ' ') + " *");

    // add bottom border
    result.push_back(border);

    return result;
}

void frame_test()
{
    vector<string> res = frame({"this is an", "example", "to", "illustrate", "framing"});
    for(vector<string>::size_type i = 0; i != res.size(); ++i)
        cout << res[i] << endl;
}

int main()
{
    //split_test();
    
    frame_test();

    return 0;
}