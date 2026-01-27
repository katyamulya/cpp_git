#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap   //inheritance from class ClapTrap
{
    public:

        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& other);  //Copy constructor
        ScavTrap& operator = (const ScavTrap& other);  //Copy assignment operator
        ~ScavTrap();

        void attack(const std::string& target);
        void guardGate();
};

#endif