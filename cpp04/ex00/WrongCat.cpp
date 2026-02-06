#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "Default constructor for WrongCat called!\n";
}
WrongCat::WrongCat(const WrongCat& other)
{
    std::cout << "Copy constructor for WrongCat called!\n";
    *this = other;
}
WrongCat& WrongCat::operator = (const WrongCat& other)
{
    std::cout << "Copy assignment operator for WrongCat called!\n";

    if (this == &other) 
        return *this;
    this->type = other.type;
    return *this;
}
WrongCat::~WrongCat()
{
    std::cout << "Destructor for WrongCat called!\n";
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Meow!\n";
}