#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		std::string _type;
	public:
		WrongCat() : WrongAnimal()
		{
			this->_type = "Essere che non é un gatto";
			std::cout << "Wrong Cat constructor" << std::endl;
		}
		~WrongCat();
		WrongCat (const WrongCat &old_type);
		WrongCat &operator= (const WrongCat &value);
		void makeSound() const;
		std::string getType() const;
};


#endif