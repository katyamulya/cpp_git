#include "Harl.hpp"

int main ()
{
    Harl harl;
    harl.complain( "DEBUG" );
    harl.complain( "INFO" );
    harl.complain( "WARNING" );
    harl.complain( "ERROR" );
    harl.complain( "Incorrect level" );

    return 0;
}

/*
When creating an object on the stack, you don't usually need 
the = Harl() assignment unless you are specifically using a certain 
constructor. You can simply write:
Harl harl;  //instead of Harl harl = Harl();
*/