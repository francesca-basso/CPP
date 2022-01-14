#include "Cat.hpp"

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(const Cat &old_type)
{
	this->type = old_type.getType();
	std::cout << "Cat copy constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &value)
{
	std::cout << "Cat assignation operator" << std::endl;
	this->type = value.getType();
	return(*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miao Miao" << std::endl;
}

std::string	Cat::getType() const
{
	return (this->_type);
}
