#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal
{
	private:
		std::string	_type;
		Brain * _brain;
	public:
		Cat();
		Cat(const Cat &cat);
		virtual ~Cat();
		Cat &operator= (const Cat &value);
		void	makeSound() const;
		std::string	getType() const;
		void setIdea(const std::string &idea);
		std::string getIdea(void) const;
};


#endif