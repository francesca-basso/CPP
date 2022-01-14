#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_materials[4];
		int		num_of_materials;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &target);
		MateriaSource &operator= (const MateriaSource &target);
		virtual ~MateriaSource();
		virtual void learnMateria(AMateria* to_use);
		AMateria *createMateria(std::string const &type);
};

#endif