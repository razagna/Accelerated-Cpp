#include <iostream>
#include <algorithm>
#include <vector>
#include "read_file.hpp"
#include "Student_info.hpp"
using namespace std;

vector<Student_info> extract_incomplete_hw(vector<Student_info>& students)
{
    vector<Student_info>::iterator iter = stable_partition(students.begin(), students.end(), did_all_hw);
    vector<Student_info> didnt(iter, students.end());
    students.erase(iter, students.end());

    return didnt;
}

int main()
{
    vector<Student_info> did;
    read_file("data\\10.txt", did);
    vector<Student_info> didnt = extract_incomplete_hw(did);
    
    if(did.empty())
    {
        cout << "No student did all their homework!";
        return EXIT_FAILURE;
    }

    if(didnt.empty())
    {
        cout << "Every student did all their homework!";
        return EXIT_FAILURE;
    }

    for(vector<Student_info>::const_iterator iter = did.begin(); iter != did.end(); ++iter)
        cout << iter->name << " did all their homework! " << endl;
    
    return 0;
}