#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Default constructor for Dog called!\n";
    //std::cout << this->type;
    //std::cout << " called\n";
}
Dog::Dog(const Dog& other)
{
    std::cout << "Copy constructor for Dog called!\n";
    //std::cout << this->type;
    //std::cout << " called\n";
    *this = other;
}
Dog& Dog::operator = (const Dog& other)
{
    std::cout << "Copy assignment operator for Dog called!\n";
    //std::cout << this->type;
    //std::cout << " called\n";

    if (this == &other) 
        return *this;
    this->type = other.type;
    return *this;
}
Dog::~Dog()
{
    std::cout << "Destructor for Dog called!\n";
    //std::cout << this->type;
    //std::cout << " called!" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof!\n";
}