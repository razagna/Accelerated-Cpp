#ifndef GUARD_find_URLs_h
#define GUARD_find_URLs_h
#include <string>
#include <vector>

bool not_url_ch(char);

std::string::const_iterator url_beg(std::string::const_iterator, std::string::const_iterator);

std::string::const_iterator url_end(std::string::const_iterator, std::string::const_iterator);

std::vector<std::string> find_url(const std::string&);

#endif