#ifndef GUARD_grading_policy_h
#define GUARD_grading_policy_h
#include <vector>
#include "Student_info.hpp"

double average_grade(const Student_info&);

double optimistic_median(const Student_info&);

double median_analysis(const std::vector<Student_info>&);

double average_analysis(const std::vector<Student_info>&);

double optimistic_median_analysis(const std::vector<Student_info>&);

#endif