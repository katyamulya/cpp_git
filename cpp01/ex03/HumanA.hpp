#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:

        Weapon& weapon;    //reference -> must be init when HumanA created
        std::string name;

    public:

        HumanA(std::string name, Weapon& weapon);
        ~HumanA();

        void attack() const;
};

#endif
