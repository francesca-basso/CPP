#include "iter.hpp"

template <class pd>
void	iter(pd *address, int lenght, void (*f)(const pd &elem))
{
	int i = 0;
	while (i < lenght)
	{
		f(address[i]);
		i++;
	}
	return ;
}

template <class T>
void	*add(T *i)
{
	*i += 2;
	return (0);
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

template< typename T>
void print( T const & x ) { std::cout << x << std::endl; return; }

int		main(void)
{
	char		caratteri[] = "abcdefghijklmnopqrstuvwxyz";
	int			numeri[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::string	stringhe[] = {"hello", "world"};

	std::cout << "Test:\t caratteri" << std::endl;
	iter(caratteri, 26, print);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Test:\t interi" << std::endl;
	iter(numeri, 9, print);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Test:\t stringhe" << std::endl;
	iter(stringhe, 2, print);
	std::cout << std::endl;
	std::cout << std::endl;

}