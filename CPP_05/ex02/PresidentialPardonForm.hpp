#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

class Bureaucrat;

#include "Form.hpp"

#include <iostream>
#include <fstream>
#include <sstream>

class PresidentialPardonForm : public Form
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(const PresidentialPardonForm &p_form);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &p_form);
		void	execute(Bureaucrat const & executor) const;
		class IsNotSignedException : public std::exception
		{
			const char *what() const throw();
		};
		~PresidentialPardonForm();
};

#endif