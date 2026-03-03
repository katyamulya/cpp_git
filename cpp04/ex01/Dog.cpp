#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal(), brain(new Brain())
{
    std::cout << "Default constructor for Dog called!\n";
    this->type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Copy constructor for Dog called!\n";
    this->brain = new Brain(*(other.brain));
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Copy assignment operator for Dog called!\n";
    if (this != &other) { // 1. Self-assignment check
        //this->type = other.type;
        // Let Animal handle its part (type, etc.)
        Animal::operator=(other); 
        delete this->brain; // 2. Clean up existing brain
        this->brain = new Brain(*(other.brain)); // 3. Deep copy
    }
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