#include <iostream>
#include <vector>
#include <list>
#include "read_file.hpp"
#include "Student_info.hpp"
#include "grade.hpp"
using namespace std;

typedef vector<Student_info> container;

bool fgrade(const Student_info& s)
{
    return grade(s) < 60;
}

container extract_fails(container& students)
{
    container fail;
    container::iterator iter = students.begin();

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

int main()
{
    container students;
    read_file("data\\10.txt", students);
    
    //sort(students.begin(), students.end(), compare);
    
    container failed = extract_fails(students);
    for(container::const_iterator iter = failed.begin(); 
        iter != failed.end(); ++iter)
        cout << iter->name << " has failed with a grade of " << grade(*iter) << endl;
    
    return 0;
}