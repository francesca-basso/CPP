#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal
{
	private:
		std::string	_type;
		Brain * _brain;
	public:
		Dog();
		Dog(const Dog &dog);
		virtual ~Dog();
		Dog &operator= (const Dog &value);
		void		makeSound() const;
		std::string	getType() const;
		void setIdea(const std::string &idea);
		std::string getIdea(void) const;
};

#endif