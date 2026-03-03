#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal  //inheritance from class Animal
{
    private:

        Brain* brain;

    public:

        Dog();
       // Dog(const std::string type);
        Dog(const Dog& other);  //Copy constructor
        Dog& operator = (const Dog& other);  //Copy assignment operator
        ~Dog();

        void makeSound() const override;
};

#endif