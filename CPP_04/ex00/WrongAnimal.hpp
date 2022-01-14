#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string _type;

public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal (const WrongAnimal &old_type);
	WrongAnimal &operator = (const WrongAnimal &value);
	std::string getType() const;
	void makeSound() const;
};

#endif