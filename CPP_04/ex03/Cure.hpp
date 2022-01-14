#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &value);
		Cure &operator=(const Cure &value);
		virtual ~Cure();
		virtual AMateria* clone() const;
		void use(ICharacter &target);
};

#endif