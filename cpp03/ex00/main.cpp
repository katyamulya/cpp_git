#include "ClapTrap.hpp"

int main ( void )
{
    ClapTrap claptrap1("Clap");
    ClapTrap claptrap2("Trap");

    claptrap1.attack("someone");
    claptrap1.attack("someone");
    claptrap2.takeDamage(2);
    claptrap2.beRepaired(3);
    claptrap2.attack("someone");
    claptrap1.takeDamage(15);
    claptrap1.takeDamage(5);
    claptrap1.beRepaired(4);

    //??? repaired max 10? hit points max 10?

    return 0;
}