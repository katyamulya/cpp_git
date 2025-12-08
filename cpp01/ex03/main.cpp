#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");

        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }

    {
        Weapon club = Weapon("crude spiked club");

        HumanB jim("Jim");
        jim.attack();          //if HumanB has no weapon to attack
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
return 0;
}

/*
a reference works as an alias for an existing variable, 
providing an alternative name for it and allowing you 
to work with the original data directly.

Use references for cleaner syntax when an object must 
always exist and won't be reassigned (like in function 
parameters for large objects to avoid copying) and use 
pointers when you need flexibility, optionality (can be nullptr), 
or advanced memory management like pointer arithmetic 
or managing dynamic lifetimes (e.g., new/delete), 
following the rule: prefer references when possible, pointers when necessary. 

HumanA with reference  -> weapon must always exist
HumanB with pointer  -> weapon can be nullptr

Result:
Bob attacks with their crude spiked club
Bob attacks with their some other type of club
Jim doesn't have any weapon to attack
Jim attacks with their crude spiked club
Jim attacks with their some other type of club
*/