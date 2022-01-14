#include "whatever.hpp"

template <class mx>
mx max(mx a, mx b)
{
	return a > b ? a : b ;
}

template <class mn>
mn min(mn a, mn b)
{
	return a < b ? a : b;
}

template <class sw>
void	swap(sw &a, sw &b)
{
	sw temp;
	
	temp = b;
	b = a;
	a = temp;
    return ;
}

int main( void )
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}