#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    // Requirement: Zombie must have a default constructor for this to work
    Zombie* zombies = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        zombies[i].setName(std::to_string(i) + " " + name);
    }

    return zombies; // Returning 'zombies' is the same as '&zombies[0]'
}