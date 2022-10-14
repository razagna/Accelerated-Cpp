#include <vector>
#include <string>
#include <map>
#include "nrand.hpp"
#include "grammar.hpp"
#include "sentence.hpp"
using namespace std;

bool isbracketed(const string& s)
{
    return s.size() > 1 && s[0] == '<' && s[s.size()-1] == '>';
}

void gen_aux(const Grammar& g, const string& word, vector<string>& res)
{
    if(!isbracketed(word))
        res.push_back(word);
    else
    {
        Grammar::const_iterator p_iter = g.find(word);

        if(p_iter == g.end())
            throw logic_error("Empty rule!");

        const Rule_Collection& c = p_iter->second;

        const Rule& r = c[nrand(c.size())];

        for(Rule::const_iterator iter = r.begin(); iter != r.end(); ++iter)
            gen_aux(g, *iter, res);
    }
}

vector<string> gen_sentence(const Grammar& g)
{
    vector<string> ret;
    gen_aux(g, "<sentence>", ret);
    return ret;
}