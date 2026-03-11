#include "Fixed.hpp"

/* Default constructor: initialize value to 0 */
Fixed::Fixed() : fxNumber(0)
{
    std::cout << "Default constructor called\n";
}

/* Copy constructor: copy the value from 'other' */
Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called\n";
    *this = other; // Use the assignment operator to avoid logic duplication
}

/* Copy assignment operator: handle 'a = b' */
Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called\n";

    if (this != &other) {
        this->setRawBits(other.getRawBits());
    }
    return *this;
}

/* Destructor */
Fixed::~Fixed()
{
    std::cout << "Destructor Called!" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fxNumber;
}

void Fixed::setRawBits( int const raw )
{
    fxNumber = raw;
}
