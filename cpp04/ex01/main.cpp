#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
const Animal* animalMeta = new Animal();
const Animal* dog = new Dog();
const Animal* cat = new Cat();
std::cout << dog->getType() << " " << std::endl;
std::cout << cat->getType() << " " << std::endl;
cat->makeSound(); //will output the cat sound!
dog->makeSound();
animalMeta->makeSound();


std::cout << std::endl;
delete animalMeta;
delete dog;
delete cat;

return 0;

}

/*
Default constructor for Animal called!
Default constructor for Animal called!
Default constructor for Dog called!
Default constructor for Animal called!
Default constructor for Cat called!
Dog 
Cat 
Meow!
Woof!
Animal makes sound!

*/