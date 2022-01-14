#include <iostream>
#include <exception>
#include "Array.hpp"

int main()
{
	Array<int> a(10);
    Array<int> b;

	a[0] = 10;
	a[1] = 22;
	std::cout << a.size() << std::endl;
    std::cout << b.size() << std::endl;

	try
	{
		std::cout << a[50] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << a[1] << std::endl;
	return (0);
}
