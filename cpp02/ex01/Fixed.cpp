#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    fpnumber = 0;
}
Fixed::Fixed(const int inumber)
{
    std::cout << "Int constructor called\n";
    if (inumber > (INT32_MAX >> fractional) || 
        inumber < (INT32_MIN >> fractional))
    {
        std::cerr << "Error: Int value overflow!\n";
        fpnumber = 0;
        std::exit(1);
    }
    else
        fpnumber = inumber << fractional;
}
Fixed::Fixed(const float fnumber)
{
    std::cout << "Float constructor called\n";
    float tmpVal = fnumber * float(1 << fractional);
    if (tmpVal > INT32_MAX || tmpVal < INT32_MIN)
    {
        std::cerr << "Error: Float value overflow!\n";
        fpnumber = 0;
        std::exit(1);
    }
    else
        fpnumber = roundf(tmpVal);
}
Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}
Fixed& Fixed::operator = (const Fixed& other)
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

int Fixed::getRawBits( void ) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return fpnumber;
}
void Fixed::setRawBits( int const raw )
{
    fpnumber = raw;
}

float Fixed::toFloat() const
{
    return ((float)fpnumber / (float)(1 << fractional));
}
int Fixed::toInt() const
{
    return (fpnumber >> fractional);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}