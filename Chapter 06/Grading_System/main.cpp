#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include "median.hpp"
#include "Student_info.hpp"
#include "grade.hpp"
#include "extract_fails.hpp"
#include "read_file.hpp"
using namespace std;

bool did_all_hw(Student_info& student)
{
    return find(student.homework.begin(), student.homework.end(), 0) == student.homework.end();
}

int main()
{
    vector<Student_info> did, didnt;

    ifstream input_file("data\\10.txt");
    if(!input_file.is_open())
        return EXIT_FAILURE;

    Student_info record;  
    while (read(input_file, record))
        if(did_all_hw(record))
            did.push_back(record);
        else
            didnt.push_back(record);
    
    if(did.empty())
    {
        throw domain_error("No student did all their homework!");
        return EXIT_FAILURE;
    }

    if(didnt.empty())
    {
        throw domain_error("All students did all their homework!");
        return EXIT_FAILURE;
    } 

    // sort(students.begin(), students.end(), compare);
    
    // vector<Student_info> failed = extract_fails(students);
    // for(int i=0; i != failed.size(); ++i)
    //     cout << failed[i].name << " has failed with a grade of " << grade(failed[i]) << endl;
    
    return 0;
}