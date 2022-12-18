#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <list>
#include <map>
#include <cctype>
#include "nrand.hpp"
using namespace std;

bool not_space(char c)
{
    return !isspace(c);
}

bool space(char c)
{
    return isspace(c);
}

list<string> split(const string& s)
{
    list<string> ret;
    typedef string::const_iterator iter;
    iter i = s.begin();
    
    while(i != s.end())
    {
        i = find_if(i, s.end(), not_space);
        
        iter j = find_if(i, s.end(), space);
        
        if(i != s.end())
            ret.push_back(string(i, j));
            
        i = j;
    }
     
    return ret;
}

typedef list<string> Rule;
typedef list<Rule> Rule_collection;
typedef map<string, Rule_collection> Grammar;

Grammar read_grammar(istream &in)
{
    Grammar ret;
    string line;

    while (getline(in, line))
    {
        list<string> entry = split(line);
        if (!entry.empty())
            ret[*entry.begin()].push_back(Rule(next(entry.begin()), entry.end()));          
    }

    return ret;
}

bool bracketed(const string& s)
{
    return s.size() > 1 && s[0] == '<' && s[s.size() - 1] == '>';
}

void gen_aux(const Grammar& g, const string& word, list<string>& ret)
{
    if(!bracketed(word))
        ret.push_back(word);
    else
    {
        Grammar::const_iterator it = g.find(word);
        if(it == g.end())
            throw logic_error("empty rule");

        const Rule_collection& c = it->second;

        Rule_collection::const_iterator iter = c.begin();
        advance(iter, nrand(c.size()));
        const Rule& r = *iter;

        for(Rule::const_iterator i = r.begin(); i != r.end(); ++i)
            gen_aux(g, *i, ret);
    }
}

list<string> gen_sentence(const Grammar& g)
{
    list<string> ret;
    gen_aux(g, "<sentence>", ret);
    return ret;
}

int main()
{
    ifstream input_file("../data/grammar.txt");
    list<string> sentence = gen_sentence(read_grammar(input_file));

    list<string>::const_iterator it = sentence.begin();
    if(!sentence.empty())
        cout << *it++;

    while(it != sentence.end())
        cout << " " << *it++;

    cout << endl;        

    return 0;
}