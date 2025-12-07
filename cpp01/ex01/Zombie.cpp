#include "Zombie.hpp"

Zombie::Zombie() {}  //default contructor
Zombie::Zombie(std::string name)
{
    this->name = name;
}
Zombie::~Zombie() //distructor
{
    std::cout << name << " was destroyed" << std::endl;
} 

void Zombie::setName(std::string name)
{
    this->name = name;
}

void Zombie::announce() const
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}