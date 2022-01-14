#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
	std::cout << "Ice constructor" << std::endl;
}

Ice::Ice(const Ice &value)
{
	this->type = value.getType();
}

Ice &Ice::operator=(const Ice &value)
{
	this->type = value.getType();
	return (*this);
}

AMateria* Ice::clone() const
{
	Ice *to_ret = new Ice();
	return (to_ret);
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor" << std::endl;
} 
