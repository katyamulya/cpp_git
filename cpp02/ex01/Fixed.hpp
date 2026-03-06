#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:

    int fpnumber;
    static const int fractional = 8;

public:

    Fixed();
    Fixed(const int inumber);
    Fixed(const float fnumber);
    Fixed(const Fixed& other);
    Fixed& operator = (const Fixed& other);
    ~Fixed();

    int getRawBits() const;
    void setRawBits( int const raw );
    float toFloat() const;
    int toInt() const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif