#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> students;
    vector<double> grades;
    const int homework_count = 5;

    cout << "Enter student name followed by midterm, final and 5 homework grades:\n";

    string name;
    while (cin >> name)
    {
        students.push_back(name);
        double midterm, final;
        cin >> midterm >> final;

        double sum = 0;
        for (int i = 0; i < homework_count; ++i)
        {
            double homework;
            if(cin >> homework)
                sum += homework;
        }

        grades.push_back(0.2 * midterm + 0.4 * final + 0.4 * (sum / 3));
    }

    for (int i = 0; i != students.size(); i++)
        cout << "Student " << students[i] << "'s final grade is " << grades[i] << endl;

    return 0;
}