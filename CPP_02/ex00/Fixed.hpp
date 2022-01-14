#ifndef FIXED_H
#define FIXED_H

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

#endif