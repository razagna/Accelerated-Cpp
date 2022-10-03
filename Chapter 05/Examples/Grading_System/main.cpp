#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Student_info.hpp"
#include "grade.hpp"
#include "extract_fails.hpp"
using namespace std;

int main()
{
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;
    
    cout << "Enter students data: " << endl;
    while (read(cin, record))
        maxlen = max(maxlen, record.name.size());
    
    sort(students.begin(), students.end(), compare);
    
    vector<Student_info> failed = extract_fails(students);
    for(vector<Student_info>::const_iterator iter = failed.begin(); iter != failed.end(); ++iter)
        cout << iter->name << " has failed with a grade of " << grade(*iter) << endl;
    
    return 0;
}