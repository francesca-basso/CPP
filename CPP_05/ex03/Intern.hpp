#ifndef INTERN_H
#define INTERN_H

#include "Form.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Form*	makeForm(std::string type, std::string name);
		class FormDoesNotExist : public std::exception
		{
			const char * what() const throw();
		};
};


#endif