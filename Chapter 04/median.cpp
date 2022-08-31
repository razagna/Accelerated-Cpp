#include <vector>
#include <stdexcept>
#include <algorithm>
using namespace std;

double median(vector<double> vec)
{
    typedef vector<double>::size_type vec_sz;
    vec_sz size = vec.size();

    if(size == 0)
        throw domain_error("You have no homework grades");

    sort(vec.begin(), vec.end());

    vec_sz mid = size / 2;

    return size % 2 == 0 ? (vec[mid] + vec[mid - 1]) / 2 : vec[mid];
}