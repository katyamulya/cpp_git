#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


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
const WrongAnimal* wrongMeta = new WrongAnimal();
const WrongAnimal* wrongCat1 = new WrongCat();
const WrongCat* wrongCat2 = new WrongCat();
std::cout << wrongCat1->getType() << " " << std::endl;
std::cout << wrongCat2->getType() << " " << std::endl;
wrongCat1->makeSound(); //will output the wrong animal sound!
wrongMeta->makeSound();
wrongCat2->makeSound(); //will output the wrong cat sound!

std::cout << std::endl;
delete animalMeta;
delete dog;
delete cat;
delete wrongMeta;
delete wrongCat1;
delete wrongCat2;

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

Default constructor for WrongAnimal called!
Default constructor for WrongAnimal called!
Default constructor for WrongCat called!
Default constructor for WrongAnimal called!
Default constructor for WrongCat called!
WrongCat 
WrongCat 
WrongAnimal makes wrong sound!
WrongAnimal makes wrong sound!
Wrong Meow!

Destructor for Animal called!
Destructor for Animal called!
Destructor for Animal called!
Destructor for WrongAnimal called!
Destructor for WrongAnimal called!
Destructor for WrongCat called!
Destructor for WrongAnimal called!
*/
