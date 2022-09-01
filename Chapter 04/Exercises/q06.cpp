#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student_info
{
    double final_grade;
    double calc_grade(double midterm, double final, vector<double> homework)
    {
        typedef vector<double>::size_type vec_sz;
        vec_sz size = homework.size();

        if(homework.size() == 0)
            throw domain_error("You have no homework grades");

        sort(homework.begin(), homework.end());

        vec_sz mid = size / 2;

        double median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2 : homework[mid];

        return 0.2 * midterm + 0.4 * final + 0.4 * median;
    }
};

istream& read_hw(istream& in, vector<double>& hw)
{
    if(in)
    {
        hw.clear();

        double grade;
        while(cin >> grade)
            hw.push_back(grade);

        in.clear();
    }

    return in;
}

int main()
{
    string name;
    double midterm, final;
    vector<double> homework;

    cout << "Please enter student information:" << endl;

    cin >> name >> midterm >> final;
    read_hw(cin, homework);

    Student_info student;
 
    student.final_grade = student.calc_grade(midterm, final, homework);
    cout << name << "'s final grade is " << student.final_grade << "." << endl;

    return 0;
}