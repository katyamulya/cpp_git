#include "Fixed.hpp"

int main( void ) 
{
/*
    Fixed const c( 10 );
    Fixed const d( 2 );
    std::cout << (c + d) << std::endl;
    std::cout << (c - d) << std::endl;
    std::cout << (c * d) << std::endl;
    std::cout << (c / d) << std::endl;

    Fixed m;
    std::cout << m << std::endl;
    std::cout << --m << std::endl;
    std::cout << m << std::endl;
    std::cout << m-- << std::endl;
    std::cout << m << std::endl;

    Fixed n(5);
    Fixed k(-5);
    std::cout << Fixed::min( k, n ) << std::endl;
*/

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    return 0;       
}

/*

0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016

*/