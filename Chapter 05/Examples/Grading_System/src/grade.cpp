#include <vector>
#include <stdexcept>
#include "grade.hpp"
#include "median.hpp"
#include "Student_info.hpp"
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

double grade(const Student_info& s)
{     
    return grade(s.midterm, s.final, s.homework);
}