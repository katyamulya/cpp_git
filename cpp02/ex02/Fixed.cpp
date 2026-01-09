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

/* Overloading: */
/* The 6 comparison operators: */
bool Fixed::operator < (const Fixed& arg) const
{
    return (this->fpnumber < arg.fpnumber);
}
bool Fixed::operator > (const Fixed& arg) const
{
    return (this->fpnumber > arg.fpnumber);
}
bool Fixed::operator <= (const Fixed& arg) const
{
    return (this->fpnumber <= arg.fpnumber);
}
bool Fixed::operator >= (const Fixed& arg) const
{
    return (this->fpnumber >= arg.fpnumber);
}
bool Fixed::operator == (const Fixed& arg) const
{
    return (this->fpnumber == arg.fpnumber);
}
bool Fixed::operator != (const Fixed& arg) const
{
    return (this->fpnumber != arg.fpnumber);
}
/* The 4 arithmetic operators: */
Fixed Fixed::operator + (const Fixed& arg) const
{
    return Fixed(this->toFloat() + arg.toFloat());
}
Fixed Fixed::operator - (const Fixed& arg) const
{
    return Fixed(this->toFloat() - arg.toFloat());
}
Fixed Fixed::operator * (const Fixed& arg) const
{
    return Fixed(this->toFloat() * arg.toFloat());
}
Fixed Fixed::operator / (const Fixed& arg) const
{
    return Fixed(this->toFloat() / arg.toFloat());
}
/* The 4 increment/decrement: */
Fixed& Fixed::operator ++ ()
{
    ++fpnumber;
    return *this;
}
Fixed Fixed::operator ++ (int)
{
    Fixed tmp(*this);
    fpnumber++;
    return tmp;
}
Fixed& Fixed::operator -- ()
{
    --fpnumber;
    return *this;
}
Fixed Fixed::operator -- (int)
{
    Fixed tmp(*this);
    fpnumber--;
    return tmp;
}

/* The 4 overloaded member functions: */
Fixed& Fixed::min (Fixed& arg1, Fixed& arg2)
{
    //std::cout << "Called min static\n";
    return (arg1 < arg2) ? arg1 : arg2;
}
const Fixed& Fixed::min (const Fixed& arg1, const Fixed& arg2)
{
   // std::cout << "Called min static const\n";
    return (arg1 < arg2) ? arg1 : arg2;
}
Fixed& Fixed::max (Fixed& arg1, Fixed& arg2)
{
    //std::cout << "Called max static\n";
    return (arg1 > arg2) ? arg1 : arg2;
}
const Fixed& Fixed::max (const Fixed& arg1, const Fixed& arg2)
{
    //std::cout << "Called max static const\n";
    return (arg1 > arg2) ? arg1 : arg2;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}