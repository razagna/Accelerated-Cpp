#include <vector>
#include <stdexcept>
#include "grade.hpp"
#include "median.hpp"
using namespace std;

double grade(double midterm, double final, double hw)
{
    return 0.2 * midterm + 0.4 * final + 0.4 * hw;
}

double grade(double midterm, double final, const vector<double>& hw)
{
    if(hw.size() == 0)
        throw domain_error("You don't have any homework grades");
        
    return grade(midterm, final, median(hw));
}