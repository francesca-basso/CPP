#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

class Bureaucrat;

#include "Form.hpp"

#include <iostream>
#include <fstream>
#include <sstream>

class ShrubberyCreationForm : public Form
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &c_form);
		ShrubberyCreationForm &operator= (const ShrubberyCreationForm &c_form);
		void	execute(Bureaucrat const & executor) const;
		class IsNotSignedException : public std::exception
		{
			const char *what() const throw();
		};
		~ShrubberyCreationForm();
};

#endif