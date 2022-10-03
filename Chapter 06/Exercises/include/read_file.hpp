#ifndef GUARD_read_file_h
#define GUARD_read_file_h
#include <vector>
#include <list>
#include "Student_info.hpp"

int read_file(std::string, std::vector<Student_info>&);

int read_file(std::string, std::list<Student_info>&);

#endif