#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery Destructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("Shrubbery", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &c_form)
{
	this->_target = c_form._target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &c_form)
{
	this->_target = c_form._target;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->is_signed())
		throw ShrubberyCreationForm::IsNotSignedException();
	if (executor.getGrade() > this->getGradeExecute())
		throw Form::GradeTooLowException();
	std::string sup = this->_target;
	sup.append("_shrubbery");
	std::ofstream file(sup);
	std::ifstream tree("tree");

	std::string supp;

	while(std::getline(tree, supp))
	{
		file << supp;
		if (!file.eof())
			file << std::endl;
	}
	file.close();
	tree.close();
}

const char *ShrubberyCreationForm::IsNotSignedException::what() const throw()
{
	return ("Form is not signed!");
}