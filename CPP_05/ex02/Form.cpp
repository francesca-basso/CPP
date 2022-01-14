#include "Form.hpp"

Form::Form() : _grade_sign(0), _grade_execute(0)
{

}

Form::Form(const std::string &name, int const grade_sign, int const grade_execute) : _name(name), _grade_sign(grade_sign), _grade_execute(grade_execute)
{
	this->_sign = false;
	if (this->_grade_sign < 1 || this->_grade_execute < 1)
		throw Form::GradeTooHighException();
	if (this->_grade_sign > 150 || this->_grade_execute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &form) : _name(form._name), _grade_sign(form._grade_sign), _grade_execute(form._grade_execute)
{
	this->_sign = form._sign;
}

Form::~Form()
{
	
}

int Form::getGradeSign() const
{
	return (this->_grade_sign);
}

int Form::getGradeExecute() const
{
	return (this->_grade_execute);
}

std::string const &Form::getName() const
{
	return (this->_name);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form error: Grade Too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form error: Grade Too Low";
}

Form &Form::operator = (Form const &value)
{
	this->_sign = value._sign;
	return (*this);
}

void	Form::beSigned(Bureaucrat const &value)
{
	if (this->_grade_sign >= value.getGrade())
	{
		std::cout << value.getName() << " signs " << this->_name << std::endl;
		this->_sign = true;
	}
	else
	{
		std::cout << value.getName() << " cannot sign " << this->_name  << " because his grade is too low." << std::endl;
		throw Form::GradeTooLowException();
	}
}

std::ostream &operator << (std::ostream &output, Form const &form)
{
	output << "Name: "<<form.getName() << ". Grade sign: " << form.getGradeSign() << ". Grade execute: " << form.getGradeExecute() << std::endl; 
	return (output);
}

bool	Form::is_signed() const
{
	return (this->_sign);
}

