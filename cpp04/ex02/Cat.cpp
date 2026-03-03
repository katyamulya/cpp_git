#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain())
{
    std::cout << "Default constructor for Cat called!\n";
    this->type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Copy constructor for Cat called!\n";
    this->brain = new Brain(*(other.brain));
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Copy assignment operator for Cat called!\n";
    if (this != &other) {
        //this->type = other.type;
		// Let Animal handle its part (type, etc.)
        Animal::operator=(other); 
        delete this->brain;
        this->brain = new Brain(*(other.brain));
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

void Cat::printBrainIdea(int i) const
{
    std::cout << this->brain->getIdea(i) << std::endl;
}

void Cat::setNewIdea(int index, std::string idea)
{
    this->brain->setIdea(index, idea);
}
