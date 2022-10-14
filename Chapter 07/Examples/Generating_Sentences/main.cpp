#include <iostream>
#include <vector>
#include <string>
#include "open_file.hpp"
#include "grammar.hpp"
#include "sentence.hpp"
using namespace std;


int main()
{
    ifstream input_file("..\\data\\grammar.txt");
    vector<string> sentence = gen_sentence(read_grammer(open_file(input_file)));

    vector<string>::const_iterator iter = sentence.begin();
    if(!sentence.empty())
        cout << *iter++;

    while(iter != sentence.end())
        cout << " " << *iter++;

    cout << endl;

    return 0; 
}