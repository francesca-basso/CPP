#include "RobotomyRequestForm.hpp"
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &request)
{
	this->_target = request._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &request)
{
	this->_target = request._target;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("Robotomy Request", 72, 45)
{
	this->_target = target;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->is_signed())
		throw RobotomyRequestForm::IsNotSignedException();
	if (executor.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();
	std::cout << "** MAKES GRILLING NOISES **" << std::endl;
	srand(time(NULL));
	int success = rand() % 2;
	if (success == 1)
		std::cout << " " << this->_target <<  " has been robotomized successfully" << std::endl;
	else
		std::cout << " " << this->_target << " could not been robotomized :(" << std::endl;
}

const char* RobotomyRequestForm::IsNotSignedException::what() const throw()
{
	return "Form is not signed";
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}