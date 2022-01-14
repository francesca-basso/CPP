#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : virtual public Animal
{
	private:
		std::string	_type;
	public:
		Dog() : Animal()
		{
			this->_type = "Dog";
			std::cout << "Dog constructor" << std::endl;
		}
		~Dog();
		Dog (const Dog &old_type);
		Dog &operator= (const Dog &value);
		void makeSound() const;
		std::string	getType() const;
};

#endif