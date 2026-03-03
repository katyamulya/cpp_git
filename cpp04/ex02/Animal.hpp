#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
    protected:        //cab be used by the inherit class

        std::string type;

    public:

        Animal();
        Animal(const Animal& other);  //Copy constructor
        Animal& operator=(const Animal& other);  //Copy assignment operator
        virtual ~Animal();

        // This makes the class ABSTRACT ( = 0):
        virtual void makeSound() const = 0;
        std::string getType() const;
};

#endif

/*
To make the Animal class Abstract, you must transform at least 
one virtual function into a Pure Virtual Function by adding = 0 
to its declaration. Once you do this, you can no longer create 
a raw Animal object (new Animal() will fail), forcing you 
to only create Cat or Dog objects.

Key Changes Explained:
Pure Virtual Function (= 0): By setting makeSound() const = 0, 
you are saying: "Every Animal must have a sound, but a generic 
Animal doesn't know what it sounds like." The Cat class MUST 
now implement this function, or it will also be considered abstract.

The Destructor: Even in an abstract class, the destructor must be virtual. 
Since your Cat has a Brain* on the heap, deleting an Animal* that 
points to a Cat would leak the brain memory if this destructor 
weren't virtual.
Implementation: In your Animal.cpp, you can now delete the body of 
makeSound since it no longer exists for the base class.
*/