#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    cout << "Enter a series of numbers following by EOF: ";
    vector<double> set;

    double number;
    while(cin >> number)
        set.push_back(number);

    typedef vector<double>::size_type vec_sz;
    vec_sz size = set.size();
    vec_sz quarter = size / 4;
    vec_sz remainder = size % 4; // 3 or 2 or 1 or 0

    sort(set.begin(), set.end());

    for(vec_sz i = size - 1; i <= size; --i)
    {
        if(i == size - 1)
        {
            cout << endl << "Q4: ";
        }
        else if(i  == 3 * quarter - 1)
        {
            cout << endl << "Q3: ";
        }
        else if(i  == 2 * quarter - 1)
        {
            cout << endl << "Q2: ";
        }
        else if(i == quarter - 1)
        {
            cout << endl << "Q1: ";
        }

        cout << set[i] << " ";
    }

    cout << endl;

}