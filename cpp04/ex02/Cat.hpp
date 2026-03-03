#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public Animal  //inheritance from class Animal
{
    private:

        Brain* brain;

    public:

        Cat();  //default constructor
        Cat(const Cat& other);  //Copy constructor
        Cat& operator=(const Cat& other);  //Copy assignment operator
        ~Cat();

        void makeSound() const override;
        void printBrainIdea(int i) const;
		void setNewIdea(int index, std::string idea);
};

#endif
