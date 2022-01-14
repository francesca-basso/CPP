#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		int last_material;
		AMateria *materials[4];
	public:
		Character();
		Character(const std::string &name);
		Character(Character const &other);
		~Character();
		Character &operator=(Character const &other);
		std::string const &getName(void) const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
		AMateria *getMateria(int index) const;
		int		getLastIndex(void) const;
};

#endif
