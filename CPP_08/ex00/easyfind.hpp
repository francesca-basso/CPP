#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <list>

class Error
{
	public:
		int i;
		Error();
		~Error();
		Error(const Error &error);
		Error &operator=(const Error &error);
		class ElementNotFound : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};


#endif