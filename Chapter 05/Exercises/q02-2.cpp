#include <iostream>
#include <fstream>
#include <list>
#include <chrono>
#include "Student_info.hpp"
#include "grade.hpp"
#include "read_file.hpp"
using namespace std;
using namespace chrono;

bool fgrade(const Student_info& s)
{
    return grade(s) < 60;
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

int main()
{
    list<Student_info> students;
    read_file("data\\10000.txt", students);
    
    list<Student_info>::size_type count = students.size();

    auto start = high_resolution_clock::now();
    list<Student_info> failed = extract_fails(students);
    auto stop = high_resolution_clock::now();
    
    cout << "Using lists, it took around " << duration_cast<microseconds>(stop - start).count()
    << " micro seconds to extract the fails from " << count << " records." << endl;

    return 0;
}