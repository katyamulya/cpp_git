#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:        //cab be used by the inherit class

        std::string type;

    public:

        WrongAnimal();
       // Animal(const std::string name);
        WrongAnimal(const WrongAnimal& other);  //Copy constructor
        WrongAnimal& operator = (const WrongAnimal& other);  //Copy assignment operator
        ~WrongAnimal();

        void makeSound() const;
        std::string getType() const;
};

#endif