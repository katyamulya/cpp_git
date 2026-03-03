#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default constructor for Animal called!\n";
    this->type = "Animal";
}

Animal::Animal(const Animal& other)
{
    std::cout << "Copy constructor for Animal called!\n";
    *this = other;
}

Animal& Animal::operator = (const Animal& other)
{
    std::cout << "Copy assignment operator for Animal called!\n";

    if (this != &other) 
    	this->type = other.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Destructor for Animal called!\n";
}

std::string Animal::getType() const
{
    return type;
}