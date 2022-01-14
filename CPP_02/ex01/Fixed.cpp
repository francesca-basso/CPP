#include "Fixed.hpp"

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
	this->value = value_2.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &value_2)
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

Fixed::Fixed(int value)
{
	std::cout << "Int costructor called" << std::endl;
	this->value = value << Fixed::f_bit;
}

Fixed::Fixed(float value)
{
	std::cout << "Float costructor called" << std::endl;
	this->value = roundf(value * (1 << Fixed::f_bit));
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << Fixed::f_bit));
}

int Fixed::toInt(void) const
{
	return (this->value >> Fixed::f_bit);
}

std::ostream &operator << (std::ostream &output, const Fixed &value)
{
	output << value.toFloat();
	return (output); 
}
