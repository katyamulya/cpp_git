#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << &str << std::endl;       //The memory address of the string variable
    std::cout << stringPTR << std::endl;  //The memory address held by stringPTR
    std::cout << &stringREF << std::endl; //The memory address held by stringREF

    std::cout << str << std::endl;         //The value of the string variable
    std::cout << *stringPTR << std::endl;   //The value pointed to by stringPTR
    std::cout << stringREF << std::endl;   //The value pointed to by stringREF


    return 0;
}

/*
a reference works as an alias for an existing variable, 
providing an alternative name for it and allowing you 
to work with the original data directly.
*/