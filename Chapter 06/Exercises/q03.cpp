#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> u(10, 100);
    vector<int> v;

    copy(u.begin(), u.end(), v.begin());
    
    for (vector<int>::const_iterator iter = u.begin(); iter != u.end(); ++iter)
        cout << *iter << endl;

    return 0;
}