#ifndef ANIMAL_HPP
#define ANIMAL_HPP

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
        virtual ~Animal();

        virtual void makeSound() const;
        std::string getType() const;
};

#endif




/*
main:
Animal* myAnimal = new Cat();
myAnimal->makeSound(); // Calls Cat's version because of 'override'
delete myAnimal;       // Only works correctly if Animal has a virtual 
                        //destructor!

Important Note: 
For the delete myAnimal above to work without leaking the Brain, 
your Animal class must have a virtual destructor: 
virtual ~Animal();.
*/