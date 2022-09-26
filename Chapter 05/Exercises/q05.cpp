#include <iostream>
#include <vector>
using namespace std;

typedef std::vector<std::string>::size_type vec_sz;

vec_sz width(const vector<string>& v)
{
    vec_sz maxlen = 0;
    for(vec_sz i = 0; i != v.size(); ++i)
        maxlen = max(maxlen, v[i].size());
        
    return maxlen;
}

vector<string> center(const vector<string>& v)
{
    vector<string> ret;
    vec_sz w = width(v);
    
    for(vector<string>::const_iterator iter = v.begin(); iter != v.end(); ++iter)
    {
        string padding = string((w - iter->size())/2, ' ');
        ret.push_back(padding + *iter + padding);
    }
    
    return ret;
}

int main()
{
	vector<string> p = {"this is", "an example", "to illustrate", "the centering property"};
	
	vector<string> res = center(p);
	
	for(vector<string>::const_iterator iter = res.begin(); iter != res.end(); ++iter)
	    cout << *iter << endl;
	    
	return 0;	
}