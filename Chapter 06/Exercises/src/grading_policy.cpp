#include <vector>
#include <algorithm>
#include <iterator>
#include "Student_info.hpp"
#include "average.hpp"
#include "median.hpp"
#include "grade.hpp"
using namespace std;

double average_grade(const Student_info& student)
{
    return grade(student.midterm, student.final, average(student.homework));
}

double optimistic_median(const Student_info& student)
{
    vector<double> nonzero;
    remove_copy(student.homework.begin(), student.homework.end(), back_inserter(nonzero), 0);

    if(nonzero.empty())
        return grade(student.midterm, student.final, 0);
    else
        return grade(student.midterm, student.final, median(nonzero));
}

double analysis(const vector<Student_info>& students, double calc_grade(const Student_info&))
{
    vector<double> grades;

    transform(students.begin(), students.end(), back_inserter(grades), calc_grade);

    return median(grades);
}