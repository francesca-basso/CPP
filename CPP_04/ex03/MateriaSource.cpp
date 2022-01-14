#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->num_of_materials = 0;
	std::cout << "Materia constructor" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &target)
{
	for (int i = 0; i < 4; i++)
		_materials[i] = NULL;
	*this = target;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &target)
{
	for (int i = 0; i < 4; i++) {
		if (_materials[i])
		{
			delete _materials[i];
			_materials[i] = NULL;
		}
		_materials[i] = target._materials[i]->clone();
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* to_use)
{
	if (this->num_of_materials >= 4)
		return ;
	this->_materials[this->num_of_materials] = to_use;
	this->num_of_materials++;
}

MateriaSource::~MateriaSource()
{
	int i = 0;
	while(i < this->num_of_materials)
	{
		delete this->_materials[i];
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	int i = 0;

	while (i < this->num_of_materials)
	{
		if (this->_materials[i]->getType() == type)
			return (this->_materials[i]->clone());
		i++;
	}
	return (0);
}
