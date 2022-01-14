#include "easyfind.hpp"

template<typename T>

void	easyfind(T &type, int num)
{
	typename T::iterator found = std::find(type.begin(), type.end(), num);

	if (found != type.end())
    	std::cout << "Element found in container: " << *found << '\n';
	else
		throw Error::ElementNotFound();
}

const char* Error::ElementNotFound::what() const throw()
{
	return "Element not found in container";
}

int main()
{
	std::list<int> lista;

	lista.push_back(10);
	lista.push_back(12);
	lista.push_back(99);

	try
	{
		easyfind(lista, 120);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	easyfind(lista, 12);
	return (0);
}