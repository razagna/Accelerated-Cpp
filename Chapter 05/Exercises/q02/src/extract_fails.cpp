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

list<Student_info> extract_fails(list<Student_info>& students)
{
    list<Student_info> fail;
    list<Student_info>::iterator iter = students.begin();

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

// container extract_fails(container& students)
// {
//     container fail;
//     vector<int> fdx;
//     int passed = 0, j = 0;
    
//     for(int i=0; i != students.size(); ++i)
//     {
//         if (fgrade(students[i]))
//         {
//             fdx.push_back(i);
//             fail.push_back(students[i]);
//         }
//         else
//         {  
//             if(!fdx.empty() && j != fdx.size())
//                 students[fdx[j++]] = students[i];
//             ++passed;
//         }
//     }
    
//     students.resize(passed);
    
//     return fail;
// }