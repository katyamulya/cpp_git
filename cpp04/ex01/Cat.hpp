#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal  //inheritance from class Animal
{
    private:

        Brain* brain;

    public:

        Cat();
       // Cat(const std::string type);
        Cat(const Cat& other);  //Copy constructor
        Cat& operator = (const Cat& other);  //Copy assignment operator
        ~Cat();

        void makeSound() const override;
        void printBrainIdea(int i) const;
};

#endif

/*
This is a classic example of a class requiring a Deep Copy because 
it manages a pointer to another object (Brain*). Since your Cat 
owns a Brain, simply copying the pointer (Shallow Copy) would 
lead to two cats sharing the same brain, causing a "double free" 
crash when they are deleted.
*/