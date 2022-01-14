#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Animal sound." << std::endl;
}

Animal::Animal(const Animal &old_type)
{
	this->type = old_type.getType();
	std::cout << "Animal copy constructor" << std::endl;
}

Animal &Animal::operator=(const Animal &value)
{
	std::cout << "Animal assignation operator" << std::endl;
	this->type = value.getType();
	return (*this);
}