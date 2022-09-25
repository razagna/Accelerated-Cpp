#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "permuted_index.hpp"
using namespace std;

int main()
{
    vector<string> res;
    vector<string> in = {"the quick brown fox", "jumped over the lazy dog", "and waved back at us"};
    int gap = shift(in);

    for(int i = 0; i != in.size(); ++i)
    {     
        string original = in[i];
        vector<string> rotated = rotate(original);
        vector<string> unrotated = unrotate(original, rotated, gap);
        res.insert(res.end(), unrotated.begin(), unrotated.end());    
    }
    
    sort(res.begin(), res.end(), compare);
    
    for(int i=0; i != res.size(); ++i)
        cout << res[i] << endl;

    return 0;
}