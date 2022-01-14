#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string	type;
		Animal();
	public:
		virtual std::string	getType() const;
		virtual void	makeSound() const = 0;
		virtual ~Animal();
};

#endif