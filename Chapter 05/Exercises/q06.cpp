#include <vector>
#include <list>
#include <chrono>
#include "read_file.hpp"
#include "Student_info.hpp"
#include "grade.hpp"
using namespace std;
using namespace chrono;

bool fgrade(const Student_info& s)
{
    return grade(s) < 60;
}

vector<Student_info> original_extract_fails(vector<Student_info>& students)
{
    vector<Student_info> fail;
    vector<Student_info>::size_type i = 0;
    
    while (i != students.size()) 
    {
        if (fgrade(students[i])) 
        {
            fail.push_back(students[i]);
            students.erase(students.begin() + i);
        } 
        else
            ++i;
    }

    return fail;
}

vector<Student_info> new_extract_fails(vector<Student_info>& students)
{
    typedef vector<Student_info>::size_type vec_sz;

    vector<Student_info> fail;
    vec_sz passed = 0, j = 0;
    vector<int> fdx;
    
    for(vec_sz i=0; i != students.size(); ++i)
    {
        if (fgrade(students[i]))
        {
            fdx.push_back(i);
            fail.push_back(students[i]);
        }
        else
        {  
            if(!fdx.empty() && j != fdx.size())
                students[fdx[j++]] = students[i];
            ++passed;
        }
    }
    
    students.resize(passed);
    
    return fail;
}

int main()
{
    vector<Student_info> students;
    read_file("data\\100.txt", students);
    
    vector<Student_info>::size_type count = students.size();
    vector<Student_info> students_before(students);

    auto original_start = high_resolution_clock::now();
    original_extract_fails(students);
    auto original_stop = high_resolution_clock::now();
    
    cout << "The original 'extract_fails' function took " << duration_cast<microseconds>(original_stop - original_start).count()
    << " micro seconds to extract the fails from " << count << " records." << endl;

    auto new_start = high_resolution_clock::now();
    new_extract_fails(students_before);
    auto new_stop = high_resolution_clock::now();

    cout << "The new 'extract_fails' function took " << duration_cast<microseconds>(new_stop - new_start).count()
    << " micro seconds to extract the fails from " << count << " records." << endl;

    return 0;
}