#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:        //cab be used by the inherit class

        std::string type;

    public:

        Animal();
       // Animal(const std::string name);
        Animal(const Animal& other);  //Copy constructor
        Animal& operator = (const Animal& other);  //Copy assignment operator
        ~Animal();

        virtual void makeSound() const;
        std::string getType() const;
};

#endif