#ifndef FORM_HPP
#define FORM_HPP
class Bureaucrat;
#include "Bureaucrat.hpp"


#include <stdlib.h>

class Form
{
	private:
		bool		_sign;
		const std::string	_name;
		const int			_grade_sign;
		const int			_grade_execute;
	public:
		Form();
		Form(const std::string &name, int const grade_sign, int const grade_execute);
		Form(const Form &form);
		virtual ~Form();
		int getGradeSign() const;
		int getGradeExecute() const;
		std::string const &getName() const;
		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};
		Form &operator = (Form const &value);
		void beSigned(Bureaucrat const &value);
		bool is_signed() const;
		virtual void	execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator << (std::ostream &output, Form const &form);

#endif