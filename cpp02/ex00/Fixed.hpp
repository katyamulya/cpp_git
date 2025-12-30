#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int fpnumber;
    static const int fractional = 8;
public:
    Fixed();
    Fixed(const Fixed& other);  //Copy constructor
    Fixed& operator = (const Fixed& other);  //Copy assignment operator
    ~Fixed();

    int getRawBits( void ) const;
    void setRawBits( int const raw );
};



#endif