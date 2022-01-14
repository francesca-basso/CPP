#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	this->_grade = 0;
	//std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	//std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	this->_grade = grade;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureau)
{
	this->_grade = bureau.getGrade();
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::string const &Bureaucrat::getName() const
{
	return (this->_name);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

void Bureaucrat::incrementGrade()
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &value)
{
	this->_grade = value._grade;
	return (*this);
}

std::ostream &operator << (std::ostream &output, Bureaucrat const &bureaucrat)
{
	output << "<" << bureaucrat.getName() << ">, bureaucrat grade <" << bureaucrat.getGrade() << ">" << std::endl;
	return (output);
}

void	Bureaucrat::signForm(Form &form) const
{
	form.beSigned(*this);
}

void	Bureaucrat::executeForm(Form const &form)
{
	form.execute(*this);
}
