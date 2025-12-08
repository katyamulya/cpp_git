#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Error: Incorrect input." << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (filename.empty() || s1.empty() || s2.empty())
    {
        std::cerr << "Error: Some data is empty." << std::endl;
        return 1;
    }

    return 0;
}