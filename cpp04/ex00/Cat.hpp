#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal  //inheritance from class Animal
{
    public:

        Cat();
       // Cat(const std::string type);
        Cat(const Cat& other);  //Copy constructor
        Cat& operator = (const Cat& other);  //Copy assignment operator
        ~Cat();

        void makeSound() const override;
        
};

#endif