#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Default constructor for Brain called!\n";
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = "Idea " + std::to_string(i);
	}
}

Brain::Brain(const Brain& other)
{
	std::cout << "Copy constructor for Brain called!\n";
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = other.ideas[i];
    }
}

Brain& Brain::operator= (const Brain& other)
{
	std::cout << "Copy assignment operator for Brain called!\n";
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Destructor for Brain called!\n";
}

std::string Brain::getIdea(int index) const
{
	if (index < 0 || index >=100)
		return "Error: Wrong index!";
	return ideas[index];
}

void Brain::setIdea(int i, std::string idea)
{
	if (i < 0 || i >= 100)
		std::cout << "Error: Wrong index!" << std::endl;
	ideas[i] = idea;
}

