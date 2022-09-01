#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    double max = 1000;
    const streamsize decimal = 3;
    streamsize maxlen = to_string((int)max).size() + decimal + 1;
    streamsize maxsq = to_string((int)(max * max)).size() + decimal + 2;

    for(double i = 1; i <= max; ++i)
    {
        streamsize prec = cout.precision();
        cout << fixed << setw(maxlen) << setprecision(decimal) 
        << i << setw(maxsq) << i*i << setprecision(prec) << endl;
    }

    return 0;
}