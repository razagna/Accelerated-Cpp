#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

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

int main()
{
    //ask for name
    cout << "Enter your first name: ";

    //read name
    string name;
    cin >> name;

    // ask for and read midterm and final
    cout << "Enter your midterm and final grades: ";
    double midterm, final;
    cin >> midterm >> final;

    //ask for and read homework
    cout << "Enter your homework grades: ";
    vector<double> homework;
    read_hw(cin, homework);

    //calculate final grade
    try
    {
        double final_grade = grade(midterm, final, homework);
        streamsize prec = cout.precision();
        cout << "Your final grade is: " << setprecision(3)
        << final_grade << setprecision(prec) << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}