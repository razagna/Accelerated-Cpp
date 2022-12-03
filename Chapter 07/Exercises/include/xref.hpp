#ifndef GUARD_xref_h
#define GUARD_xref_h
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "split.hpp"

std::map<std::string, std::vector<int> > xref(std::istream&, std::vector<std::string> find_words(const std::string&) = split);

#endif