#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Default constructor called\n";
    this->name = name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy constructor called\n";
    *this = other;
}
ClapTrap& ClapTrap::operator = (const ClapTrap& other)
{
    std::cout << "Copy assignment operator called\n";

    if (this == &other) 
        return *this;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    return *this;
}
ClapTrap::~ClapTrap()
{
    std::cout << "Destructor Called!" << std::endl;
}
void ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints == 0 || this->hitPoints == 0)
    {
        std::cout << this->name << " doesn't have enough points to attack!\n";
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target; 
    std::cout << ", causing " << this->attackDamage << " points of damage!\n";
    this->energyPoints--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    this->attackDamage = this->attackDamage + amount; //????????
}