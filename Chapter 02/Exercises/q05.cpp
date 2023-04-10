#include <iostream>
#include <string>
using namespace std;

int main()
{
    int rows = 5;
    int cols = 15;

    for (int r = 0; r < rows; ++r)
    {
        cout << string(cols, '*') << "\n";
    }

    cout << endl;

    for (int r = 0; r < rows; ++r)
    {
        cout << string(20, '*') << "\n";
    }

    cout << endl;

    int mid = cols / 2;
    int interval = mid / rows;

    for (int r = 0; r < rows; ++r)
    {
        cout << string(mid - r * interval, ' ');
        cout << string(2 * r + 1, '*') << "\n";
    }

    return 0;
}