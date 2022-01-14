#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "Wrong Animal";
	std::cout << "Wrong animal contructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong animal destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &old_type)
{
	this->_type = old_type.getType();
	std::cout << "Wrong Animal copy constructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &value)
{
	std::cout << "Wrong animal assignation operator" << std::endl;
	this->_type = value.getType();
	return(*this);
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal makes sound" << std::endl;
}
