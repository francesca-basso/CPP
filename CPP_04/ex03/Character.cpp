#include "Character.hpp"

Character::Character()
{
	this->_name = "0";
	this->last_material = 0;
}

Character::Character(const std::string &name)
{
	this->_name = name;
	this->last_material = 0;
}

Character::Character(Character const &other)
{
	this->_name = other.getName();
	int index = other.getLastIndex();
	for (int i = 0; i < index; i++)
		this->materials[i] = other.getMateria(i);
	this->last_material = index;
}

AMateria *Character::getMateria(int index) const
{
	if (index > this->last_material)
		return ;
	return this->materials[index];
}

int Character::getLastIndex(void) const
{
	return this->last_material;
}

Character &Character::operator= (Character const &other)
{
	this->_name = other.getName();
	int index = other.getLastIndex();
	for (int i = 0; i < index; i++)
		this->materials[i] = other.getMateria(i);
	this->last_material = index;
	return (*this);
}

std::string const &Character::getName(void) const
{
	return(this->_name);
}

Character::~Character()
{
	int i = 0;
	while (i < this->last_material)
	{
		delete this->materials[i];
		i++;
	}
}

void Character::equip (AMateria *m)
{
	if (this->last_material >= 4)
		return ;
	this->materials[this->last_material] = m;
	this->last_material++;
}

void Character::unequip(int idx)
{
	int i = idx;

	while (i < 3)
	{
		this->materials[i] = this->materials[i + 1];
		this->materials[i + 1] = NULL;
		i++;
	}
	this->last_material--;
}

void Character::use (int idx, ICharacter &target)
{
	this->materials[idx]->use(target);
}
