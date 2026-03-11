#include "Fixed.hpp"

Fixed::Fixed() : fxNumber(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called\n";
    /*if (inumber > (INT32_MAX >> fractional) || 
        inumber < (INT32_MIN >> fractional))
    {
        std::cerr << "Error: Int value overflow!\n";
        fpnumber = 0;
        std::exit(1);
    }
    else
        fpnumber = inumber << fractional;*/
    this->fxNumber = value << fractionalBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called\n";
    /*float tmpVal = fnumber * float(1 << fractional);
    if (tmpVal > INT32_MAX || tmpVal < INT32_MIN)
    {
        std::cerr << "Error: Float value overflow!\n";
        fpnumber = 0;
        std::exit(1);
    }
    else
        fpnumber = roundf(tmpVal);*/
    this->fxNumber = roundf(value * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called\n";
    //this->fpnumber = other.getRawBits();
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

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}
