#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();

        void setName(std::string name);
        void announce();
};

Zombie* zombieHorde( int N, std::string name );

#endif

/*
Default Constructor: To use new Zombie[N], your Zombie class 
MUST have a default constructor (one that takes no arguments). 
If your only constructor is Zombie(std::string name), 
the compiler will throw an error because it doesn't know how to
 "fill" the array initially.
*/