#include <iostream>
#include <algorithm>
#include <vector>
#include "read_file.hpp"
#include "Student_info.hpp"
#include "grade.hpp"
using namespace std;

bool fgrade(const Student_info& s)
{
    return grade(s) < 60;
}

vector<Student_info> extract(vector<Student_info>& original, bool criteria(const Student_info&))
{
    vector<Student_info>::iterator iter = stable_partition(original.begin(), original.end(), criteria);
    vector<Student_info> extracted(original.begin(), iter);
    original.erase(original.begin(), iter);

    return extracted;
}

int main()
{
    vector<Student_info> students;
    read_file("data\\10.txt", students);
    vector<Student_info> failed = extract(students, fgrade);

    for(vector<Student_info>::const_iterator iter = failed.begin(); iter != failed.end(); ++iter)
        cout << iter->name << " has failed with a grade of " << grade(*iter) << endl;
    
    return 0;
}