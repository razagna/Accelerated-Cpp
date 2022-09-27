#include <iostream>
#include <algorithm>
#include "palindrome.hpp"
using namespace std;

int main()
{
    cout << "Please enter a word: ";

    string word;
    cin >> word;
    
    cout << "The word " << word 
    << (isPalindrome(word) ? " IS " : " is NOT ") 
    << "a palindrome";

    return 0;
}
