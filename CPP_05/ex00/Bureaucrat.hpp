#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &bureau);
		virtual ~Bureaucrat();
		int getGrade() const;
		std::string const &getName() const;
		void incrementGrade();
		void decrementGrade();
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
		Bureaucrat &operator = (Bureaucrat const &value);
};

std::ostream &operator << (std::ostream &out, Bureaucrat const &bureaucrat);

#endif
