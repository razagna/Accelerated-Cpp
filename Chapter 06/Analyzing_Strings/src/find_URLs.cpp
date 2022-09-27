#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include "find_URLs.hpp"
using namespace std;

bool not_url_ch(char c)
{
    static const string url_ch = "~;/?:@=&$-_.+!*'(),";

    return !(isalnum(c) || find(url_ch.begin(), url_ch.end(), c) != url_ch.end());
}

string::const_iterator url_beg(string::const_iterator b, string::const_iterator e)
{
    static const string sep = "://";
    typedef string::const_iterator iter;
    iter i = b;

    while ((i = search(i, e, sep.begin(), sep.end())) != e)
    {
        if (i != b && i + sep.size() != e)
        {
            iter beg = i;

            while (beg != b && isalpha(beg[-1]))
                --beg;

            if (beg != i && !not_url_ch(i[sep.size()]))
                return beg;
        }

        i += sep.size();
    }

    return e;
}

string::const_iterator url_end(string::const_iterator b, string::const_iterator e)
{
    return find_if(b, e, not_url_ch);
}

vector<string> find_url(string& s)
{
    vector<string> ret;
    typedef string::const_iterator iter;
    iter b = s.begin(), e = s.end();

    while (b != e)
    {
        b = url_beg(b, e);

        if (b != e)
        {
            iter after = url_end(b, e);

            ret.push_back(string(b, after));

            b = after;
        }
    }

    return ret;
}