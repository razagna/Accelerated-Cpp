#include <vector>
#include <algorithm>
#include "palindrome.hpp"
using namespace std;

bool isPalindrome(const string& s)
{
    return equal(s.begin(), s.end(), s.rbegin());
}