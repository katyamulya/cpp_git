#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:

        int fxNumber;
        static const int fractional = 8;

    public:

        Fixed();
        Fixed(const Fixed& other);  //Copy constructor
        Fixed& operator=(const Fixed& other);  //Copy assignment operator
        ~Fixed();

    int getRawBits() const;
    void setRawBits( int const raw );
};

#endif

/*
static const int fractional = 8: Fixed-point number uses 8 bits 
for the "decimal" part. In binary, that’s like saying 1.0 
is represented as 256 (2^8)
fxNumber: This stores the raw integer that represents "fake" 
decimal (the fixed-point number value). 
*/
