#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string type) : type(type) {}

Weapon::~Weapon() {}

void Weapon::setType(const std::string& newType)
{
    type = newType;
}

const std::string& Weapon::getType() const
{
    return type;
}