#ifndef GUARD_grade_h
#define GUARD_grade_h
#include <vector>
#include "Student_info.h"

double grade(double, double, double);

double grade(double, double, const std::vector<double>&);

double grade(Student_info&);

#endif