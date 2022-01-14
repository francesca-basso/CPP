#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
}

Animal::~Animal()
{
	// destructor in place
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Animal sound." << std::endl;
}