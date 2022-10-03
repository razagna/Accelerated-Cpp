#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
#include "extract_fails.hpp"
#include "Student_info.hpp"
#include "grade.hpp"
using namespace std;

bool fgrade(const Student_info& s)
{
    return grade(s) < 60;
}

bool pgrade(const Student_info& s)
{
    return !fgrade(s);
}

vector<Student_info> extract_fails(vector<Student_info>& students)
{
   vector<Student_info>::iterator iter = stable_partition(students.begin(), students.end(), pgrade);
   vector<Student_info> fail(iter, students.end());
   students.erase(iter, students.end());
   
   return fail;
}
