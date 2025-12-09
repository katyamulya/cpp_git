#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

const std::string& ifreplace(const std::string& line, const std::string& s1, const std::string& s2);
void replace(const std::string& filename, const std::string& s1, const std::string& s2);

#endif