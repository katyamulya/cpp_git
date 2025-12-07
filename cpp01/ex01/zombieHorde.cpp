#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* zombies = new Zombie[N];
    for (int i=0; i<N; i++)
    {
        zombies[i].setName(std::to_string(i) + " " + name); //to check ig correct
        //zombies[i].setName(name);
    }

    return &zombies[0];
}