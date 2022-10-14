#ifndef GUARD_sentence_h
#define GUARD_sentence_h
#include <vector>
#include <string>
#include "grammar.hpp"

bool isbracketed(const std::string&);

void gen_aux(const Grammar&, const std::string&, std::vector<std::string>&);

std::vector<std::string> gen_sentence(const Grammar&);

#endif