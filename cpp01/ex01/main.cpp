#include "Zombie.hpp"

int main()
{
    int N = 3;
    std::string name = "Zari";

    Zombie* zombie = zombieHorde(N, name);
    for (int i=0; i<N; i++)
    {
        zombie[i].announce();

    }

    delete[] zombie;

    return 0;
}