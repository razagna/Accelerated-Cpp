#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <list>
#include <map>
#include <cctype>
#include "split.hpp"
#include "nrand.hpp"
using namespace std;

typedef vector<string> Rule;
typedef vector<Rule> Rule_collection;
typedef map<string, Rule_collection> Grammar;

Grammar read_grammar(istream &in)
{
    Grammar ret;
    string line;

    while (getline(in, line))
    {
        vector<string> entry = split(line);
        if (!entry.empty())
            ret[*entry.begin()].push_back(Rule(entry.begin() + 1, entry.end()));          
    }

    return ret;
}

bool bracketed(const string& s)
{
    return s.size() > 1 && s[0] == '<' && s[s.size() - 1] == '>';
}

vector<string> gen_sentence(const Grammar& g, const string& word)
{
    vector<string> ret;
    vector<string> rules;
    rules.push_back(word);

    while(!rules.empty())
    {
        Grammar::const_iterator iter = g.find(rules[0]);
        if(iter == g.end())
            throw logic_error("no such rule");

        const Rule_collection& c = iter->second;

        const Rule& r = c[nrand(c.size())];

        Rule::iterator it = rules.erase(rules.begin());
        for(Rule::const_iterator i = r.begin(); i != r.end(); ++i)
        {
            if(bracketed(*i))
            {
                it = rules.insert(it, *i);
                ++it;
            } 
            else
                ret.push_back(*i);  
        }
   
    }

    return ret;
}

int main()
{
    ifstream input_file("../data/grammar.txt");
    vector<string> sentence = gen_sentence(read_grammar(input_file), "<sentence>");

    vector<string>::const_iterator it = sentence.begin();
    if(!sentence.empty())
        cout << *it++;

    while(it != sentence.end())
        cout << " " << *it++;

    cout << endl;        

    return 0;
}