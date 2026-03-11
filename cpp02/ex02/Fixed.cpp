#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    fxNumber = 0;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called\n";
    fxNumber = value << fractionalBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called\n";
    fxNumber = roundf(value * float(1 << fractionalBits));
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called\n";

    if (this != &other) 
    {
        this->setRawBits(other.getRawBits());
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor Called!" << std::endl;
}

int Fixed::getRawBits() const
{
    return fxNumber;
}

void Fixed::setRawBits( int const raw )
{
    fxNumber = raw;
}

float Fixed::toFloat() const
{
    return ((float)fxNumber / (float)(1 << fractionalBits));
}

int Fixed::toInt() const
{
    return (fxNumber >> fractionalBits);
}

/* Overloading: */
/* The 6 comparison operators: */
bool Fixed::operator<(const Fixed& arg) const
{
    return (this->fxNumber < arg.getRawBits());
}
bool Fixed::operator>(const Fixed& arg) const
{
    return (this->fxNumber > arg.getRawBits());
}
bool Fixed::operator<=(const Fixed& arg) const
{
    return (this->fxNumber <= arg.getRawBits());
}
bool Fixed::operator>=(const Fixed& arg) const
{
    return (this->fxNumber >= arg.getRawBits());
}
bool Fixed::operator==(const Fixed& arg) const
{
    return (this->fxNumber == arg.getRawBits());
}
bool Fixed::operator!=(const Fixed& arg) const
{
    return (this->fxNumber != arg.getRawBits());
}
/* The 4 arithmetic operators: */
Fixed Fixed::operator+(const Fixed& arg) const
{
    return Fixed(this->toFloat() + arg.toFloat());
}
Fixed Fixed::operator-(const Fixed& arg) const
{
    return Fixed(this->toFloat() - arg.toFloat());
}
Fixed Fixed::operator*(const Fixed& arg) const
{
    return Fixed(this->toFloat() * arg.toFloat());
}
Fixed Fixed::operator/(const Fixed& arg) const
{
    return Fixed(this->toFloat() / arg.toFloat());
}
/* The 4 increment/decrement: */
Fixed& Fixed::operator++()
{
    ++fxNumber;
    return *this;
}
Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    fxNumber++;
    return tmp;
}
Fixed& Fixed::operator--()
{
    --fxNumber;
    return *this;
}
Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    fxNumber--;
    return tmp;
}

/* The 4 overloaded member functions: */
Fixed& Fixed::min(Fixed& arg1, Fixed& arg2)
{
    //std::cout << "Called min static\n";
    return (arg1 < arg2) ? arg1 : arg2;
}
const Fixed& Fixed::min(const Fixed& arg1, const Fixed& arg2)
{
   // std::cout << "Called min static const\n";
    return (arg1 < arg2) ? arg1 : arg2;
}
Fixed& Fixed::max(Fixed& arg1, Fixed& arg2)
{
    //std::cout << "Called max static\n";
    return (arg1 > arg2) ? arg1 : arg2;
}
const Fixed& Fixed::max(const Fixed& arg1, const Fixed& arg2)
{
    //std::cout << "Called max static const\n";
    return (arg1 > arg2) ? arg1 : arg2;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}