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
    Fixed(const Fixed& other);  //Copy constructor
    Fixed& operator = (const Fixed& other);  //Copy assignment operator
    ~Fixed();

    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat() const;
    int toInt() const;

    /* Overloading: */

    /* The 6 comparison operators: */
    bool operator < (const Fixed& arg) const;
    bool operator > (const Fixed& arg) const;
    bool operator >= (const Fixed& arg) const;
    bool operator <= (const Fixed& arg) const;
    bool operator == (const Fixed& arg) const;
    bool operator != (const Fixed& arg) const;

    /* The 4 arithmetic operators: */
    Fixed operator + (const Fixed& arg) const;
    Fixed operator - (const Fixed& arg) const;
    Fixed operator * (const Fixed& arg) const;
    Fixed operator / (const Fixed& arg) const;

    /* The 4 increment/decrement: */
    Fixed& operator ++ ();
   // Fixed operator ++ (int);
   // Fixed& operator -- ();
   // Fixed operator -- (int);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif