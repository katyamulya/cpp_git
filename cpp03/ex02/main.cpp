#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ( void )
{
    ClapTrap claptrap("Clap");
    ScavTrap scavtrap("Scav");
    FragTrap fragtrap("Frag");

    claptrap.attack("someone");
    claptrap.takeDamage(2);
    claptrap.beRepaired(3);

    scavtrap.attack("someone");
    scavtrap.takeDamage(50);
    scavtrap.beRepaired(15);
    scavtrap.guardGate();

    fragtrap.attack("someone");
    fragtrap.takeDamage(45);
    fragtrap.beRepaired(3);
    fragtrap.highFivesGuys();

    return 0;
}