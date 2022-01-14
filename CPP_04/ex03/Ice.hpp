#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &value);
		Ice &operator=(const Ice &value);
		virtual ~Ice();
		AMateria* clone() const;
		void use(ICharacter &target);
};

#endif