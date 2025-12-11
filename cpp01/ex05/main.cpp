#include "Harl.hpp"

int main ()
{
    Harl harl = Harl();
    harl.complain( "DEBUG" );
    harl.complain( "INFO" );
    harl.complain( "WARNING" );
    harl.complain( "ERROR" );
    harl.complain( "Incorrect level" );

    return 0;
}