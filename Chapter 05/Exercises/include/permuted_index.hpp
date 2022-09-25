#ifndef GUARD_permuted_index_h
#define GUARD_permuted_index_h
#include <vector>
#include <string>

int shift(const std::vector<std::string>&);

std::vector<std::string> rotate(const std::string&);

std::vector<std::string> unrotate(const std::string&, const std::vector<std::string>&, int);

bool compare(const std::string&, const std::string&);

#endif