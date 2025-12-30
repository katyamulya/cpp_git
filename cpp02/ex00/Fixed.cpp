#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    fpnumber = 0;
}
Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}
Fixed& Fixed::operator = (const Fixed& other)
{
    std::cout << "Copy assignment operator called\n";

    if (this != &other) { // avoid self assignment
       // delete &fpnumber; // cleanup old memory
        this->setRawBits(other.getRawBits());
    }
    return *this;
}
Fixed::~Fixed()
{
    std::cout << "Destructor Called!" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fpnumber;
}
void Fixed::setRawBits( int const raw )
{
    fpnumber = raw;
}