#include <iostream>
#include "fail_grades.h"
#include "grade.h"
using namespace std;

void fgrade_test()
{
    Student_info student;

    cout << endl << "Please enter student info: ";
    read(cin, student);

    cout << "You have " << (fgrade(student) ? "failed." : "passed!") << endl;
}

void extract_fail_test(vector<Student_info> students)
{
    cout << "There are " << students.size() << " students in total:" << endl;

    vector<Student_info> failures = extract_fail(students);

    cout << students.size() << " student(s) have passed, and they are:" << endl;
    for(vector<Student_info>::size_type i = 0; i != students.size(); ++i)
        cout << "- " << students[i].name << " scored " << grade(students[i]) << endl;

    cout << "And " << failures.size() << " student(s) have failed, and they are:" << endl;
    for(vector<Student_info>::size_type i = 0; i != failures.size(); ++i)
        cout << "- " << failures[i].name << " scored " << grade(failures[i]) << endl;
    
}

int main()
{
    cout << "Hi You! Please enter your students information:" << endl;
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;

    while(read(cin, record))
    {
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }

    extract_fail_test(students);

    return 0;
}
