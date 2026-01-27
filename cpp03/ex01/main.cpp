#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ( void )
{
    ClapTrap claptrap("Clap");
    ScavTrap scavtrap("Scav");

    claptrap.attack("someone");
    claptrap.takeDamage(2);
    claptrap.beRepaired(3);
    scavtrap.attack("someone");
    scavtrap.takeDamage(50);
    scavtrap.beRepaired(15);
    scavtrap.guardGate();

    return 0;
}