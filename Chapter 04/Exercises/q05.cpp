#include <iostream>
#include <vector>
using namespace std;

istream& read(istream& is, vector<string>& vec)
{
    string word;
    while(is >> word)
        vec.push_back(word);
    
    return is;
}

void count(vector<string>& vec)
{
    cout << "There are " << vec.size() << " words in this sentence." << endl;

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

int main()
{
    cout << "Enter a sentence: ";
    vector<string> words;
    
    read(cin, words);
    count(words);



    return 0;
}