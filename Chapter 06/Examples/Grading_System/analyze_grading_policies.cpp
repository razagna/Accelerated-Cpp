#include <iostream>
#include <fstream>
#include <vector>
#include "Student_info.hpp"
#include "grading_policy.hpp"
using namespace std;

void write_analysis(ostream& out, const string& name, double analysis(const vector<Student_info>&), const vector<Student_info>& did, const vector<Student_info>& didnt)
{
    out << name << " => median(did): " << analysis(did) <<
    ", median(didn't): " << analysis(didnt) << endl;
}

int main()
{
    vector<Student_info> did, didnt;

    ifstream input_file("..\\data\\10.txt");
    if(!input_file.is_open())
        return EXIT_FAILURE;

    Student_info record;  
    while(read(input_file, record))
    {
        if(did_all_hw(record))
            did.push_back(record);
        else
            didnt.push_back(record);
    }
        
    if(did.empty())
    {
        cout << "No student did all their homework!";
        return EXIT_FAILURE;
    }

    if(didnt.empty())
    {
        cout << "Every student did all their homework!";
        return EXIT_FAILURE;
    }

    write_analysis(cout, "median_analysis", median_analysis, did, didnt);
    write_analysis(cout, "average_analysis", average_analysis, did, didnt);
    write_analysis(cout, "optimistic_median_analysis", optimistic_median_analysis, did, didnt);
    
    // for(vector<Student_info>::const_iterator iter = did.begin(); iter != did.end(); ++iter)
    //     cout << iter->name << " did all their homework! " << endl;
    
    return 0;
}