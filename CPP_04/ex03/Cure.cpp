#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
	std::cout << "Cure constructor" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure detructor" << std::endl;
}

Cure::Cure(const Cure &value)
{
	this->type = value.getType();
}

Cure &Cure::operator=(const Cure &value)
{
	this->type = value.getType();
	return (*this);
}

AMateria* Cure::clone() const
{
	Cure *to_ret = new Cure();
	return (to_ret);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wound *" << std::endl;
}