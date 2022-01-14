#include "WrongCat.hpp"

WrongCat::~WrongCat()
{
	std::cout << "Wrong cat destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &old_type)
{
	this->_type = old_type.getType();
	std::cout << "Wrong cat copy contructor" << std::endl;
}

WrongCat &WrongCat::operator= (const WrongCat &value)
{
	std::cout << "Wrong cat assignation operator" << std::endl;
	this->_type = value.getType();
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Rumore di gatto sbagliato" << std::endl;
}

std::string WrongCat::getType() const
{
	return (this->_type);
}