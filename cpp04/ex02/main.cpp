#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{

	/*
	It's not possible create any object of an abstract class (Animal)
	*/
	//const Animal* animal = new Animal();  //error
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	delete dog;
	delete cat;

	std::cout << "\nArray of animals:" << std::endl;
	Animal* animals[6];
	for (int i = 0; i < 3; i++)
	{
		animals[i] = new Cat();
	}
	for (int i = 3; i < 6; i++)
	{
		animals[i] = new Dog();
	}
	for (int i = 0; i < 6; i++)
	{
		delete animals[i];
	}

	std::cout << "\nCreate a copy of Cat:" << std::endl;
	Cat cat1;
	Cat cat2(cat1);
	std::cout << "Before:" << std::endl;
	cat1.printBrainIdea(2);
	cat2.printBrainIdea(2);
	std::cout << "After:" << std::endl;
	cat1.setNewIdea(2, "New Idea");
	cat1.printBrainIdea(2);
	cat2.printBrainIdea(2);
	
	return 0;

}
