#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:

        Weapon* weapon; //pointer -> allow HumanBto start life with no weapon (pointer can be init to NULL or nullptr).
        std::string name;

    public:

        HumanB(std::string name);
        ~HumanB();

        void setWeapon(Weapon& newWeapon);
        void attack() const;
};

#endif
