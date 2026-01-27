#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "Default constructor for FragTrap ";
    std::cout << this->name;
    std::cout << " called\n";
}
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "Copy constructor for FragTrap ";
    std::cout << this->name;
    std::cout << " called\n";
}
FragTrap& FragTrap::operator = (const FragTrap& other)
{
    std::cout << "Copy assignment operator for FragTrap ";
    std::cout << this->name;
    std::cout << " called\n";

    if (this == &other) 
        return *this;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    return *this;
   // ClapTrap::operator=(other);
}
FragTrap::~FragTrap()
{
    std::cout << "Destructor for FragTrap ";
    std::cout << this->name;
    std::cout << " called!" << std::endl;
}


void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap ";
    std::cout << this->name;
    std::cout << ": High-five time! You're doing amazing - keep it up!✋" << std::endl;
}