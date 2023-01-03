#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>
#include <Student_info.hpp>
using namespace std;

int main()
{
    string::size_type maxlen = 0;
    vector<Student_info> students;
    Student_info record;

    ifstream input_file("../data/students.txt");
    while(record.read(input_file))
    {
        maxlen = max(maxlen, record.name().size());
        students.push_back(record);
    }

    sort(students.begin(), students.end(), compare);

    for(vector<Student_info>::const_iterator iter = students.begin(); iter != students.end(); ++iter)
    {
        cout << iter->name() << string(maxlen - iter->name().size() + 1, ' ');

        if(iter->valid())
        {
            double final_grade = iter->grade();
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade << setprecision(prec) << "\n";
        }      
    }

    return 0;
}