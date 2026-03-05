#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

std::string replaceS(std::string line, const std::string& s1, const std::string& s2);
void replace(const std::string& filename, const std::string& s1, const std::string& s2);

#endif