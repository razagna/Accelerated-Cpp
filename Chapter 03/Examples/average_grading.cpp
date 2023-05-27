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
    double midterm, final;
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

    cout << "Hello, " << name << "!\n";

    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
         << (0.2 * midterm + 0.4 * final + 0.4 * (sum / count)) 
         << "!" << setprecision(prec) <<endl;

    return 0;
}