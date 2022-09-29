#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include "median.hpp"
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
    {
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    } 
    
    sort(students.begin(), students.end(), compare);
    
    vector<Student_info> failed = extract_fails(students);
    for(int i=0; i != failed.size(); ++i)
        cout << failed[i].name << " has failed with a grade of " << grade(failed[i]) << endl;
    
    return 0;
}