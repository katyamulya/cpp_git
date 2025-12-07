#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        //Zombie();  //default contructor
        Zombie(std::string name);
        ~Zombie(); //distructor

        void announce() const;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif