#include "Dog.hpp"

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog &old_type)
{
	this->type = old_type.getType();
	std::cout << "Dog copy contructor" << std::endl;
}

Dog &Dog::operator=(const Dog &value)
{
	std:: cout << "Dog assignation operator" << std::endl;
	this->type = value.getType();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wof Wof!" << std::endl;
}

std::string	Dog::getType() const
{
	return (this->_type);
}

