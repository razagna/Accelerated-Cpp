#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int max = 100;
    int maxlen = to_string(max*max).size();

    for(int i = 1; i < max; ++i)
    {
        cout << setw(4) << i << setw(maxlen) << i*i << endl;
    }

    return 0;
}