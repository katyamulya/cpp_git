#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
//# include "ScavTrap.hpp"

class FragTrap : public ClapTrap   //inheritance from class ClapTrap
{
    public:

        FragTrap(const std::string& name);
        FragTrap(const FragTrap& other);  //Copy constructor
        FragTrap& operator = (const FragTrap& other);  //Copy assignment operator
        ~FragTrap();

        //void attack(const std::string& target);
        void highFivesGuys(void);
};

#endif