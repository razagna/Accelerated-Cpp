#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Student_info
{
    string name;
    double midterm;
    double final;
    vector<double> homework;
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

double median(vector<double> vec)
{
    typedef vector<double>::size_type vec_sz;
    vec_sz size = vec.size();

    if(size == 0)
        throw domain_error("You have no homework grades");

    sort(vec.begin(), vec.end());

    vec_sz mid = size / 2;

    return size % 2 == 0 ? (vec[mid] + vec[mid - 1]) / 2 : vec[mid];
}

double grade(double midterm, double final, double homework)
{
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const vector<double>& homework)
{
    if(homework.size() == 0)
        throw domain_error("You have no homework grades");

    return grade(midterm, final, median(homework));
}

double grade(Student_info& student)
{
    return grade(student.midterm, student.final, student.homework);
}

istream& read(istream& is, Student_info& record)
{
    is >> record.name >> record.midterm >> record.final;

    read_hw(is, record.homework);

    return is;
}

bool compare(const Student_info& s1, const Student_info& s2)
{
    return s1.name < s2.name;
}

int main()
{
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;

    while(read(cin, record))
    {
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }

    sort(students.begin(), students.end(), compare);

    //calculate final grade
    try
    {
        for(int i = 0; i < students.size(); ++i)
        {
            double final_grade = grade(students[i]);
            streamsize prec = cout.precision();
            cout << students[i].name << string(maxlen + 1 - students[i].name.size(), ' ') 
            << setprecision(3) << final_grade << setprecision(prec) << endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}