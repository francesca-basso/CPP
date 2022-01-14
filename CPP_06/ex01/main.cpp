#include "Data.hpp"

int main()
{
	Data *a = new Data;
	uintptr_t ptr = serialize(a);
	Data *b = deserialize(ptr);

	std::cout << a << std::endl;
	std::cout << ptr << std::endl;
	std::cout << b << std::endl;

	delete a;
	return (0);
}