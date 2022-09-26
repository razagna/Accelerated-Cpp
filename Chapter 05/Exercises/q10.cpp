#include <iostream>
#include <vector>
using namespace std;

string longest(const vector<string> &v)
{
    string ret;
    int maxlen = 0;

    for (int i = 0; i != v.size(); ++i)
    {
        if (v[i].size() > maxlen)
        {
            maxlen = v[i].size();
            ret = v[i];
        }
    }

    return ret;
}

bool isPalindrome(const string &s)
{
    int i = 0, j = s.size() - 1;
    int half = s.size() / 2;

    while (i <= half && j >= half)
    {
        if (s[i] != s[j])
            return false;

        ++i;
        --j;
    }

    return true;
}

int main()
{
    vector<string> wordList = {"reviver", "hello", "civic", "telephone", "aibohphobia", "banana"};
    vector<string> palindromes;

    cout << "The following words are palindromes: ";
    for(vector<string>::const_iterator iter = wordList.begin(); iter != wordList.end(); ++iter)
    {
        if (isPalindrome(*iter))
        {
            palindromes.push_back(*iter);
            cout << *iter << ", ";
        }
    }     

    cout << endl << "The longest palindrome is " << longest(palindromes) << "!" << endl;
    
    return 0;
}