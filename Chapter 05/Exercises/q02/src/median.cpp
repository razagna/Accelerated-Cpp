#include <vector>
#include <algorithm>
#include <stdexcept>
#include "median.hpp"
using namespace std;

double median(vector<double> vec)
{
    typedef vector<double>::size_type vec_sz;
    vec_sz size = vec.size();
    
    if(size == 0)
        throw domain_error("Can't find median of an empy vecor");
        
    vec_sz mid = size / 2;
        
    sort(vec.begin(), vec.end());
    return size % 2 == 0 ? (vec[mid]+ vec[mid-1]) / 2 : vec[mid];
}
