#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
	this->_type = cat.type;
	this->_brain = new Brain();
	this->_brain->setIdea(cat.getIdea());
	std::cout << "Cat copy constructor called" << std::endl; 
}

void	Cat::makeSound() const
{
	std::cout << "Miao Miao" << std::endl;
}

std::string	Cat::getType() const
{
	return (this->_type);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
};

Cat &Cat::operator=(const Cat &value)
{
	std::cout << "Cat assignation operator" << std::endl;
	this->type = value.getType();
	return(*this);
}

void Cat::setIdea(const std::string &idea)
{
	this->_brain->setIdea(idea);
}

std::string Cat::getIdea(void) const
{
	return (this->_brain->getIdea());
}