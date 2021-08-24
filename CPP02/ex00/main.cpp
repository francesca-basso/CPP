#include <iostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &value_2);
		Fixed &operator = (const Fixed &value_2);
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int value;
		static const int f_bit = 8;
};

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &value_2)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = value_2.getRawBits(); //me lo converte da int a int const e me lo salva in value_2
}

Fixed &Fixed::operator=(const Fixed &value_2) //per evitare che value_2 subisca modifiche al cambiamento di value, lo assegniamo qui
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = value_2.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int main( void ) 
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}