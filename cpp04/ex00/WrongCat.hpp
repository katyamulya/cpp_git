#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal  //inheritance from class Animal
{
    public:

        WrongCat();
       // Cat(const std::string type);
        WrongCat(const WrongCat& other);  //Copy constructor
        WrongCat& operator = (const WrongCat& other);  //Copy assignment operator
        ~WrongCat();

        void makeSound() const;
};

#endif