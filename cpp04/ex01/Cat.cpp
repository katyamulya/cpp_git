#include <iostream>
#include "Cat.hpp"

/*
Here we put Animal() just to make it sure, 
that Animal default contructor was called
Somethimes it could connstructor with parameters
Also this way make program more efficient
*/
Cat::Cat() : Animal(), brain(new Brain())
{
    std::cout << "Default constructor for Cat called!\n";
    this->type = "Cat";
    //this->brain = new Brain();  //can be used if we use "if", but usually better another way
}

/*Copy Constructor (Deep Copy)*/
/*
When you create a new cat from an existing one (Cat kitty = original;), 
you need to create a new Brain and copy the contents of the old brain into it.
*/
Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Copy constructor for Cat called!\n";

    /*
    this->type = other.type; //don't need to manually copy this->type = other.type 
                            //if you use the Member Initializer List correctly.
    In C++, the best practice is to let the Animal Copy Constructor handle 
    the Animal parts, while the Cat Copy Constructor handles 
    the Cat parts (the brain).
    */

    // Don't just do: this->brain = other.brain; (That's a shallow copy!)
    this->brain = new Brain(*(other.brain));
    /*
    This line is the "heart" of a Deep Copy. To understand it, we have to 
    break it down into three distinct steps that happen all at once.
    1. other.brain
    This gets the pointer to the brain of the "source" Cat (the one 
    you are copying from).
    2. *(other.brain) (Dereferencing)
    The asterisk * here dereferences the pointer.
    other.brain is just a memory address (e.g., 0x123).
    *(other.brain) refers to the actual Brain object sitting at that address.
    By passing the actual object into the parentheses, you are calling 
    the Brain's Copy Constructor.
    3. new Brain(...) (Allocation)
    This is the most important part for memory safety:
    It requests a brand new block of memory on the heap for a second brain.
    It initializes this new brain using the data from the old brain.
    It returns the address of this new memory, which is then 
    stored in this->brain
    */
}

/*Copy Assignment Operator*/
/*
This is the trickiest part. You must handle three things:
- Check for self-assignment (e.g., catA = catA;).
- Delete the current brain to prevent a leak.
- Allocate a new brain and copy the data
*/
Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Copy assignment operator for Cat called!\n";
    if (this != &other) { // 1. Self-assignment check
        //this->type = other.type;
        // Let Animal handle its part (type, etc.)
        Animal::operator=(other); 
        delete this->brain; // 2. Clean up existing brain
        this->brain = new Brain(*(other.brain)); // 3. Deep copy
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Destructor for Cat called!\n";
    delete this->brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow!\n";
}

void Cat::printBrainIdea(int i) const {
        // Use the function from class Brain
    std::cout << this->brain->getIdea(i) << std::endl;
}

void Cat::setNewIdea(int index, std::string idea)
{
    this->brain->setIdea(index, idea);
}