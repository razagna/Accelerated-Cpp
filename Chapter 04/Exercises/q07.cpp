#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

istream& read(istream& is, vector<double>& vec)
{
    if(is)
    {
        vec.clear();

        double x;
        while(is >> x)
            vec.push_back(x);

        is.clear();
    }

    return is;
}

double calc_average(vector<double>& vec)
{
    double sum = 0;
    for(int i = 0; i != vec.size(); ++i)
        sum += vec[i];

    return sum / vec.size();
}

int main()
{
    cout << "Please enter the numbers: ";

    vector<double> nums;
    read(cin, nums);
    double average = calc_average(nums);

    streamsize prec = cout.precision();
    cout << "The average is " << setprecision(3) 
    << average << setprecision(prec) << endl;

    return 0;
}