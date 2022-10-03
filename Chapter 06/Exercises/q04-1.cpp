#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> u(10, 100);
    vector<int> v;
    v.reserve(u.size());

    copy(u.begin(), u.end(), v.end());
    
    for (vector<int>::const_iterator iter = u.begin(); iter != u.end(); ++iter)
        cout << *iter << endl;

    return 0;
}