#include <iostream>
#include <vector>
#include "Student_info.h"
using namespace std;

istream& read(istream& is, Student_info& record)
{
    is >> record.name >> record.midterm >> record.final;

    read_hw(is, record.homework);

    return is;
}

istream& read_hw(istream& in, vector<double>& hw)
{
    if(in)
    {
        hw.clear();

        double grade;
        while(cin >> grade)
            hw.push_back(grade);

        in.clear();
    }

    return in;
}

bool compare(const Student_info& s1, const Student_info& s2)
{
    return s1.name < s2.name;
}