#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <chrono>
#include "read_file.hpp"
#include "Student_info.hpp"
#include "grade.hpp"
// #include "extract_fails.hpp"
using namespace std;
using namespace chrono;

bool fgrade(const Student_info& s)
{
    return grade(s) < 60;
}

bool pgrade(const Student_info& s)
{
    return !fgrade(s);
}

vector<Student_info> two_pass_extract_fails(vector<Student_info>& students)
{
   vector<Student_info> fail;
   
   remove_copy_if(students.begin(), students.end(), back_inserter(fail), pgrade);
   students.erase(remove_if(students.begin(), students.end(), fgrade), students.end());

   return fail;
}

vector<Student_info> one_pass_extract_fails(vector<Student_info>& students)
{
   vector<Student_info>::iterator iter = stable_partition(students.begin(), students.end(), pgrade);
   vector<Student_info> fail(iter, students.end());
   students.erase(iter, students.end());
   
   return fail;
}

int main()
{
    vector<Student_info> students;
    read_file("data\\100000.txt", students);
    
    vector<Student_info>::size_type count = students.size();
    vector<Student_info> new_students(students);

    auto start = high_resolution_clock::now();
    vector<Student_info> failed = two_pass_extract_fails(students);
    auto stop = high_resolution_clock::now();
    
    cout << "The two-pass solution took " << duration_cast<microseconds>(stop - start).count()
    << " microseconds to extract " << failed.size() << " fails from " << count << " records." << endl;
    
    auto new_start = high_resolution_clock::now();
    vector<Student_info> new_failed = one_pass_extract_fails(new_students);
    auto new_stop = high_resolution_clock::now();
    
    cout << "The one-pass solution took " << duration_cast<microseconds>(new_stop - new_start).count()
    << " microseconds to extract " << new_failed.size() << " fails from " << count << " records." << endl;

    // for(vector<Student_info>::const_iterator iter = failed.begin(); iter != failed.end(); ++iter)
    //     cout << iter->name << " has failed with a grade of " << grade(*iter) << endl;
    
    return 0;
}