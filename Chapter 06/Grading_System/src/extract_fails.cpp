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

vector<Student_info> extract_fails(vector<Student_info>& students)
{
   vector<Student_info> fail;
   vector<Student_info>::iterator iter = students.begin();
   
   while (iter != students.end())
   {
       if (fgrade(*iter))
       {
           fail.push_back(*iter);
           iter = students.erase(iter);
       }
       else
           ++iter;
   }
   
   return fail;
}
