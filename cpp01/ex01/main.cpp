#include "Zombie.hpp"

int main()
{
    int hordeSize = 3;
    std::string name = "Zoooombiiii";

    Zombie* zombies = zombieHorde(hordeSize, name);
    for (int i = 0; i < hordeSize; i++)
    {
        zombies[i].announce();
    }

    delete[] zombies;

    return 0;
}

/*
The Correct Delete: When you are finished with this horde, you must 
use delete[] (with brackets) rather than just delete.
delete[] zombies; calls the destructor for every zombie in the array.
delete zombies; would only call the destructor for the first one, 
leading to memory leaks or undefined behavior.
*/