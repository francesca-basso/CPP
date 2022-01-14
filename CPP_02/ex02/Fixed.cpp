#include "Fixed.hpp"

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &value_2)
{
	this->value = value_2.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &value_2)
{
	this->value = value_2.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

Fixed::Fixed(int value)
{
	this->value = value << Fixed::f_bit;
}

Fixed::Fixed(float value)
{
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

bool Fixed::operator > (const Fixed &value_2) const
{
	return (this->getRawBits() > value_2.getRawBits());
}

bool Fixed::operator < (const Fixed &value_2) const
{
	return (this->getRawBits() < value_2.getRawBits());
}

bool Fixed::operator >= (const Fixed &value_2) const
{
	return (this->getRawBits() >= value_2.getRawBits());
}

bool Fixed::operator <= (const Fixed &value_2) const
{
	return (this->getRawBits() <= value_2.getRawBits());
}

bool Fixed::operator == (const Fixed &value_2) const
{
	return (this->getRawBits() == value_2.getRawBits());
}

bool Fixed::operator != (const Fixed &value_2) const
{
	return (this->getRawBits() != value_2.getRawBits());
}

Fixed Fixed::operator + (const Fixed &value_2)
{
	Fixed value_1;

	std::cout << this->value;

	value_1.setRawBits(this->getRawBits() + value_2.getRawBits());
	return (value_1);
}

Fixed Fixed::operator - (const Fixed &value_2)
{
	Fixed value_1;

	value_1.setRawBits(this->getRawBits() - value_2.getRawBits());
	return (value_1);
}

Fixed Fixed::operator * (const Fixed &value_2)
{
	Fixed value_1;

	value_1.setRawBits((this->getRawBits() * value_2.getRawBits()) >> f_bit);
	return (value_1);
}

Fixed Fixed::operator / (const Fixed &value_2)
{
	Fixed value_1;

	value_1.setRawBits((this->getRawBits() << f_bit) / value_2.getRawBits());
	return (value_1);
}

Fixed& Fixed::operator ++ ()
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed temp(*this);

	operator++();
	return (temp);
}

Fixed& Fixed::operator -- ()
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator -- (int)
{
	Fixed temp(*this);

	operator--();
	return (temp);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed const &min(Fixed const &a, Fixed const &b)
{
	return (Fixed::min(a, b));
}

Fixed &min(Fixed &a, Fixed &b)
{
	return (Fixed::min(a, b));
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const &max(Fixed const &a, Fixed const &b)
{
	return (Fixed::max(a, b));
}

Fixed &max(Fixed &a, Fixed &b)
{
	return (Fixed::max(a, b));
}
