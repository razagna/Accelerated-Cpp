#include <iostream>
#include <string>
#include "Student_info.hpp"
#include "grade.hpp"
using namespace std;

Student_info::Student_info(): midterm(0), final(0) {}

Student_info::Student_info(istream& is) { read(is); }

istream& Student_info::read(istream& is)
{
    is >> n >> midterm >> final;

    //::read_hw(is, homework);
    if(is)
    {
        homework.clear();

        double x;
        while(is >> x)
            homework.push_back(x);

        is.clear();
    }

    return is;
}

istream& read_hw(istream& is, vector<double> hw)
{
    if(is)
    {
        hw.clear();

        double x;
        while(is >> x)
            hw.push_back(x);

        is.clear();
    }

    return is;
}

double Student_info::grade() const
{
    return ::grade(midterm, final, homework);
}

bool compare(const Student_info& s1, const Student_info& s2)
{
    return s1.name() < s2.name();
}