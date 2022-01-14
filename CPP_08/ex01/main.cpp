
#include "span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(3);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try
	{
		sp.addNumber(10);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	Span span2 = Span(10);

	span2.addNumber(1, 5);

	std::cout << span2.shortestSpan() << std::endl;
	std::cout << span2.longestSpan() << std::endl;

	std::list<int> lista;

	lista.push_back(10);
	lista.push_back(22);

	span2.addNumber(lista);

	std::cout << span2.shortestSpan() << std::endl;
	std::cout << span2.longestSpan() << std::endl;


	// 10000 tests //

	Span ten_thousand(10000);
	ten_thousand.addNumber(0, 10000);

	std::cout << ten_thousand.shortestSpan() << std::endl;
	std::cout << ten_thousand.longestSpan() << std::endl;

	try
	{
		ten_thousand.addNumber(10); // error past array 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	


	return (0);
}