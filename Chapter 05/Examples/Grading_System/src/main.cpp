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
        // find length of longest name
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    } 
    
    // alphabetize the student records
    sort(students.begin(), students.end(), compare);
    
    // write the names and grades
    for (vector<Student_info>::size_type i = 0;
         i != students.size(); ++i)
    {
        cout << students[i].name << string(maxlen + 1 - students[i].name.size(), ' ');
        
        try
        {
            double final_grade = grade(students[i]);
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade << setprecision(prec);
        }
        catch (domain_error e)
        {
            cout << e.what();
        }
        
        cout << endl;  
    }
    
    vector<Student_info> failed = extract_fails(students);
    for(int i=0; i != failed.size(); ++i)
        cout << failed[i].name << " has failed." << endl;
    
    return 0;
}