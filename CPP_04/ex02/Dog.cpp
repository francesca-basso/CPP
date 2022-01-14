#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
	this->_type = dog.type;
	this->_brain = new Brain();
	this->_brain->setIdea(dog.getIdea());
	std::cout << "Dog copy constructor called" << std::endl; 
}

void	Dog::makeSound() const
{
	std::cout << "Wof Wof!" << std::endl;
}

std::string	Dog::getType() const
{
	return (this->_type);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
};

Dog &Dog::operator=(const Dog &value)
{
	std:: cout << "Dog assignation operator" << std::endl;
	this->type = value.getType();
	return (*this);
}

void Dog::setIdea(const std::string &idea)
{
	this->_brain->setIdea(idea);
}

std::string Dog::getIdea(void) const
{
	return (this->_brain->getIdea());
}