#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "Default constructor for ScavTrap ";
    std::cout << this->name;
    std::cout << " called\n";
}
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "Copy constructor for ScavTrap ";
    std::cout << this->name;
    std::cout << " called\n";
}
ScavTrap& ScavTrap::operator = (const ScavTrap& other)
{
    std::cout << "Copy assignment operator for ScavTrap ";
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
ScavTrap::~ScavTrap()
{
    std::cout << "Destructor for ScavTrap ";
    std::cout << this->name;
    std::cout << " called!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energyPoints == 0 || this->hitPoints == 0)
    {
        std::cout << this->name << " doesn't have enough points to attack!\n";
        return ;
    }
    std::cout << "ScavTrap " << this->name << " attacks " << target; 
    std::cout << ", causing " << this->attackDamage << " points of damage!\n";
    this->energyPoints--;
    std::cout << "ScavTrap " << this->name << " has: ";
    std::cout << this->hitPoints << " hit points, ";
    std::cout << this->energyPoints << " energy points\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap ";
    std::cout << this->name;
    std::cout << " is now in Gate keeper mode" << std::endl;
}