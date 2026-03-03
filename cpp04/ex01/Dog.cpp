#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default constructor for Dog called!\n";
    this->type = "Dog";
    this->brain = new Brain();
}
Dog::Dog(const Dog& other)
{
    std::cout << "Copy constructor for Dog called!\n";
    *this = other;
}
Dog& Dog::operator = (const Dog& other)
{
    std::cout << "Copy assignment operator for Dog called!\n";
    if (this == &other) 
        return *this;
    this->type = other.type;
    return *this;
}
Dog::~Dog()
{
    std::cout << "Destructor for Dog called!\n";
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof!\n";
}