#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Please enter a sentence followed by EOF:" << endl;

    bool first_word = true;
    size_t len, maximum = 0, minimum = 0;
    string input;
    while(cin >> input)
    {
        len = input.length();

        if(first_word)
        {
            minimum = len;
            first_word = false;
        }
        else
        {
            maximum = max(maximum, len);
            minimum = min(minimum, len);
        }
    }

    cout << "The shortest word is made out of " << minimum << " characters.\n";
    cout << "The longest word is made out of " << maximum << " characters." << endl;
}