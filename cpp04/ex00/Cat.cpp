#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Default constructor for Cat called!\n";
    //std::cout << this->type;
    //std::cout << " called\n";
}
/*
Cat::Cat(const std::string type)
{
    this->type = type;
    std::cout << "Constructor for Cat ";
    std::cout << this->type;
    std::cout << " called\n";
}
*/
Cat::Cat(const Cat& other)
{
    std::cout << "Copy constructor for Cat called!\n";
    //std::cout << this->type;
    //std::cout << " called\n";
    *this = other;
}
Cat& Cat::operator = (const Cat& other)
{
    std::cout << "Copy assignment operator for Cat called!\n";
    //std::cout << this->type;
    //std::cout << " called\n";

    if (this == &other) 
        return *this;
    this->type = other.type;
    return *this;
}
Cat::~Cat()
{
    std::cout << "Destructor for Cat called!\n";
    //std::cout << this->type;
    //std::cout << " called!" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow!\n";
}