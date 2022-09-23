#include <iostream>
#include <vector>
#include <string>
#include "permuted_index.hpp"
using namespace std;

int main()
{
    vector<string> res;
    vector<string> in = {"the quick brown fox", "jumped over the lazy dog", "and ran to his home in the hills", "leaving traces of breadcrumbs"};
    
    for(int i = 0; i != in.size(); ++i)
    {     
        vector<string> rot = rotate(in[i]);
        vector<string> unrot = unrotate(in[i], rot, shift(in));
        res.insert(res.end(), unrot.begin(), unrot.end());    
    }
    
    // sort(res.begin(), res.end(), compare);
    
    
    // for(int i=0; i!= res.size(); ++i)
    //     cout << res[i] << endl;
    
    cout << "Tesing permuted index: " << endl;
    return 0;
}