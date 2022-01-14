#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

class Bureaucrat;

#include "Form.hpp"

#include <iostream>
#include <fstream>
#include <sstream>

class RobotomyRequestForm : public Form
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(const RobotomyRequestForm &request);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &request);
		void	execute(Bureaucrat const &executor) const;
		class IsNotSignedException : public std::exception
		{
			const char *what() const throw();
		};
		~RobotomyRequestForm();
};

#endif