#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

istream& read(istream& is, vector<string>& vec)
{
    if(is)
    {
        vec.clear();

        string word;
        while(is >> word)
            vec.push_back(word);

        is.clear();
    } 
    
    return is;
}

void iter_count(vector<string> vec)
{
    for(int i = 0; i < vec.size(); ++i)
    {
        if(vec[i] == "") continue;

        int count = 1;
        for(int j = 0; j < vec.size(); ++j)
        {
            if(vec[i] == vec[j] && j != i) //
            {   
                count += 1;
                vec[j] = "";
            }        
        }

        cout << vec[i] << ": " << count << (count > 1 ? " times" : " time") << endl;
    }
}

void sort_count(vector<string> vec)
{
    sort(vec.begin(), vec.end());

    int count = 1;
    for(int i = 0; i < vec.size(); ++i)
    {
        if(vec[i] == vec[i+1])
        {
            count += 1;
            continue;
        } 

        cout << vec[i] << ": " << count << (count > 1 ? " times" : " time") << endl;
        count = 1;
    }
}

int main()
{
    //ask the user for input
    cout << "Enter a sentence: ";

    //store input words in a vector
    vector<string> words;
    read(cin, words);

    //print out the number of input words
    cout << "There are " << words.size() << " words in this sentence." << endl;

    //count and print repetitions in two different ways
    iter_count(words);
    sort_count(words);

    return 0;
}