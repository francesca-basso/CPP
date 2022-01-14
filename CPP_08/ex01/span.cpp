#include "span.hpp"

Span::Span()
{

}

Span::Span(unsigned int N)
{
	if (N <= 0)
		return ;
	this->_arr = new int[N];
	this->_maxsize = N;
	this->_size = 0;
	this->_index = 0;
};

Span::~Span()
{
	if (this->_arr)
		delete this->_arr;
}

Span::Span(const Span &span)
{
	this->_size = span._size;
}

Span &Span::operator=(const Span &span)
{
	this->_size = span._size;
	return (*this);
}

void	Span::addNumber(int num)
{
	if (this->_index < this->_maxsize)
	{
		this->_arr[this->_index] = num;
		this->_index++;
		this->_size++;
	}
	else
	{
		throw Span::ErrorArray();
	}
}

void	Span::addNumber(int range_start, int range_end)
{
	while (range_start < range_end)
	{
		this->addNumber(range_start);
		range_start++;
	}
}

void	Span::addNumber(std::list<int> int_list)
{
	for (std::list<int>::iterator it = int_list.begin(); it != int_list.end(); ++it)
	{
		this->addNumber(*it);
	}
	
}

const char* Span::ErrorArray::what() const throw()
{
	return "Error past array";
}

int		Span::shortestSpan(void)
{
	if (this->_size <= 1)
	{
		throw Span::NoNumbers(); // throw exception if no numbers
	}

	std::list<int> sorted;

	for (int i = 0; i < this->_size; i++)
	{
		sorted.push_back(this->_arr[i]);
	}

	sorted.sort();
	std::list<int>::iterator iter = sorted.begin();	
	
	int first_shortest = *iter;
	 ++iter;
	int second_shortest = *iter;
	return (second_shortest - first_shortest);
}

int		Span::longestSpan(void)
{
	if (this->_size <= 1)
	{
		throw Span::NoNumbers(); // throw exception if no numbers
	}
	std::list<int> sorted;
	for (int i = 0; i < this->_size; i++)
	{
		sorted.push_back(this->_arr[i]);
	}
	int last;
	sorted.sort();
	for (std::list<int>::iterator it = sorted.begin(); it != sorted.end(); ++it) // iterate till last elem of list
		last = *it;
	std::list<int>::iterator iter = sorted.begin();	//find first element of sorted list
	int first = *iter;
	return (last - first);
}

const char* Span::NoNumbers::what() const throw()
{
	return "There are no numbers.";
}