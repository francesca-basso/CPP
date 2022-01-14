#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : virtual public Animal
{
	private:
		std::string	_type;
	public:
		Cat() : Animal()
		{
			this->_type = "Cat";
			std::cout << "Cat constructor" << std::endl;
		}
		~Cat();
		Cat (const Cat &old_type);
		Cat &operator= (const Cat &value);
		void makeSound() const;
		std::string	getType() const;		
};


#endif