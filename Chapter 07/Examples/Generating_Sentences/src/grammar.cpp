#include <iostream>
#include <vector>
#include <string>
#include "grammar.hpp"
#include "split.hpp"
using namespace std;

Grammar read_grammer(istream& in)
{
    Grammar ret;
    string line;
    while(getline(in, line))
    {
        vector<string> entry = split(line);
        ret[entry[0]].push_back(Rule(entry.begin() + 1, entry.end()));
    }

    return ret;
}

void print_grammar(const Grammar& g)
{
    for(map<string, Rule_Collection>::const_iterator entry = g.begin(); entry != g.end(); ++entry)
    {
        cout << entry->first << "\t";
        for(Rule_Collection::const_iterator rule = entry->second.begin(); rule != entry->second.end(); ++rule)
        {
            Rule::const_iterator word = rule->begin();
            cout << *word++;
            while(word != rule->end())
                cout << " " << *word++;
            cout << " | ";
        }
        cout << endl;
    }
}
