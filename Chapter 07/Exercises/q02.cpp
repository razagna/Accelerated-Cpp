#include <iostream>
#include <vector>
#include <map>
#include "read_file.hpp"
#include "Student_info.hpp"
#include "grade.hpp"
using namespace std;

struct range
{ 
    double low;
    double high;
};

void xref(map<char, range>& ref)
{
    char letter = 'A';
    ref[letter] = range{90, 100};

    for(int i = 0; i != 3; ++i)
    {
        char prev = letter;
        ref[++letter] = range{ref[prev].low - 10, ref[prev].high - 10.001};
    }

    ref['F'] = range{0, 60};
}

int main()
{
    vector<Student_info> students;
    read_file("\\data\\10.txt", students);

    map<char, vector<Student_info> > result;
    map<char, range> ref;
    xref(ref);
    
    for(map<char, range>::const_iterator letter_it = ref.begin(); letter_it != ref.end(); ++letter_it)
    {
        for(vector<Student_info>::const_iterator student_it = students.begin(); student_it != students.end(); ++student_it)    
        {
            double student_grade = grade(*student_it);
            if(student_grade > letter_it->second.low && student_grade < letter_it->second.high)
                result[letter_it->first].push_back(*student_it);
        }
    }
    
    for(map<char, vector<Student_info> >::const_iterator iter = result.begin(); iter != result.end(); ++iter)
    {
        vector<Student_info>::const_iterator it = iter->second.begin();
        cout << iter->first << ": \t" << it++->name;

        while(it != iter->second.end())
            cout << ", " << it++->name;

        cout << endl;
    }

    return 0;
}