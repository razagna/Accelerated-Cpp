#ifndef GUARD_Student_info
#define GUARD_Student_info
#include <iostream>
#include <string>
#include <vector>

class Student_info
{
public:
    Student_info();
    Student_info(std::istream&);

    std::string name() const {return n; }
    std::istream& read(std::istream& is);

    bool valid() const { return !homework.empty(); }
    double grade() const;

private:
    std::string n;
    double midterm, final;
    std::vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);

#endif