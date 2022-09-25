#include <iostream>
#include <vector>
#include <string>
#include "Student_info.hpp"
using namespace std;

istream& read(std::istream& in, Student_info& student)
{
    in >> student.name >> student.midterm, student.final;
   
    read_hw(in, student.homework);
    
    return in;
}

istream& read_hw(istream& in, vector<double>& hw)
{
    if(in)  
    {
         hw.clear();
         
         double x;
         while(in >> x)
             hw.push_back(x);
             
         in.clear();      
     }  
    
    return in;
}

bool compare(const Student_info& s1, const Student_info& s2)
{
    return s1.name < s2.name;
}
