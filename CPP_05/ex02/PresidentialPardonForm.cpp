#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p_form)
{
	this->_target = p_form._target;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("Presidential Pardon", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &p_form)
{
	this->_target = p_form._target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->is_signed())
		throw PresidentialPardonForm::IsNotSignedException();
	if (executor.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

const char* PresidentialPardonForm::IsNotSignedException::what() const throw()
{
	return "Form is not signed";
}