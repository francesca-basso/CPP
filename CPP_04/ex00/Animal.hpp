#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		virtual ~Animal();
		Animal (const Animal &old_type);
		Animal &operator = (const Animal &value);
		virtual std::string	getType() const;
		virtual void	makeSound() const;	
};

#endif