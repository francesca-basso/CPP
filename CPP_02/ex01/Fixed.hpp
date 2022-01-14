#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(int value);
		Fixed(float value);
		~Fixed();
		Fixed(const Fixed &value_2);
		Fixed &operator = (const Fixed &value_2);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
	private:
		int value;
		static const int f_bit = 8;
};

std::ostream &operator << (std::ostream &output, const Fixed &value);

#endif