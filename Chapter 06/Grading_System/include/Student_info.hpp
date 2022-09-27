#ifndef GUARD_Student_info_h
#define GUARD_Student_info_h
#include <iostream>
#include <vector>
#include <string>

struct Student_info
{
    std::string name;
    double midterm;
    double final;
    std::vector<double> homework;
};

std::istream& read(std::istream&, Student_info&);

std::istream& read_hw(std::istream&, std::vector<double>&);

bool compare(const Student_info&, const Student_info&);

bool did_all_hw(Student_info&);

#endif