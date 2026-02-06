#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Default constructor for Animal called!\n";
    //std::cout << this->type;
    //std::cout << " called\n";
}
/*
Animal::Animal(const std::string name)
{
    this->type = type;
    std::cout << "Constructor for Animal ";
    std::cout << this->type;
    std::cout << " called\n";
}
*/
Animal::Animal(const Animal& other)
{
    std::cout << "Copy constructor for Animal called!\n";
    //std::cout << this->type;
   // std::cout << " called\n";
    *this = other;
}
Animal& Animal::operator = (const Animal& other)
{
    std::cout << "Copy assignment operator for Animal called!\n";
    //std::cout << this->type;
    //std::cout << " called\n";

    if (this == &other) 
        return *this;
    this->type = other.type;
    return *this;
}
Animal::~Animal()
{
    std::cout << "Destructor for Animal called!\n";
    //std::cout << this->type;
    //std::cout << " called!" << std::endl;
}
void Animal::makeSound() const
{
    std::cout << "Animal makes sound!\n";
}

std::string Animal::getType() const
{
    return type;
}