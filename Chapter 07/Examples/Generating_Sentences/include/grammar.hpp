#ifndef GUARD_grammar_h
#define GUARD_grammar_h
#include <iostream>
#include <vector>
#include <string>
#include <map>

typedef std::vector<std::string> Rule;
typedef std::vector<Rule> Rule_Collection;
typedef std::map<std::string, Rule_Collection> Grammar;

Grammar read_grammer(std::istream&);

void print_grammar(const Grammar&);

#endif