#include <iostream>
#include <iomanip>
#include <ios>
#include <string>
using namespace std;

int main()
{
    cout << "Enter your name: ";
    string name;
    cin >> name;

    cout << "Please enter your midterm and final exam grades: ";
    double midterm = 0.0;
    double final = 0.0;
    cin >> midterm >> final;

    cout << "Enter all your homework grades, "
            "followed by end-of-file: ";

    int count = 0;
    double sum = 0.0;
    int homework;

    while (cin >> homework)
    {
        ++count;
        sum += homework;
    }

    streamsize prec = cout.precision();
    cout << "Hello, " << name << "!\n"
         << "Your final grade is " << setprecision(3)
         << (0.2 * midterm + 0.4 * final + 0.4 * (count? (sum / count) : 0))
         << "!" << setprecision(prec) << endl;

    return 0;
}