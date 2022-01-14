#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <list>

class Span
{
	public:
		Span();
		Span(unsigned int N);
		~Span();
		Span(const Span &span);
		Span &operator=(const Span &span);
		void	addNumber(int num);
		void	addNumber(std::list<int> int_list);
		void	addNumber(int range_start, int range_end);
		int		shortestSpan(void);
		int		longestSpan(void);
		class ErrorArray : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class NoNumbers : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
	private:
		int *_arr;
		int _maxsize;
		int _size;
		int _index;
};

#endif