#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal & target);
		Animal &operator = (const Animal &value);
		virtual std::string	getType() const;
		virtual void	makeSound() const;
};

#endif