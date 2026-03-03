#include <iostream>
#include <string>
#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Default constructor for Animal called!\n";
}

Animal::Animal(const Animal& other)
{
    std::cout << "Copy constructor for Animal called!\n";
    *this = other;
}

Animal& Animal::operator = (const Animal& other)
{
    std::cout << "Copy assignment operator for Animal called!\n";

    if (this == &other) 
        return *this;
    this->type = other.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Destructor for Animal called!\n";
}

void Animal::makeSound() const
{
    std::cout << "Animal makes sound!\n";
}

std::string Animal::getType() const
{
    return type;
}