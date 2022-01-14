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
		bool operator > (const Fixed &value_2) const;
		bool operator < (const Fixed &value_2) const;
		bool operator >= (const Fixed &value_2) const;
		bool operator <= (const Fixed &value_2) const;
		bool operator == (const Fixed &value_2) const;
		bool operator != (const Fixed &value_2) const;
		Fixed operator + (const Fixed &value_2);
		Fixed operator - (const Fixed &value_2);
		Fixed operator / (const Fixed &value_2);
		Fixed operator * (const Fixed &value_2);
		Fixed operator ++ (int);
		Fixed& operator ++ ();
		Fixed operator -- (int);
		Fixed& operator -- ();
		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
	private:
		int value;
		static const int f_bit = 8;
};

std::ostream &operator << (std::ostream &output, const Fixed &value);
Fixed const &min(Fixed const &a, Fixed const &b);
Fixed const &max(Fixed const &a, Fixed const &b);
Fixed &min(Fixed &a, Fixed &b);
Fixed &max(Fixed &a, Fixed &b);

#endif