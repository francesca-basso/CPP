#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

const char * Intern::FormDoesNotExist::what() const throw()
{
	return ("Form doesnt exist!");
}

Form *Intern::makeForm(std::string type, std::string name)
{
	int i = 0;
	Form *to_ret;
	std::string check[3];
	check[0] = "robotomy request";
	check[1] = "pardon request";
	check[2] = "shruberry request";
	while(i < 4)
	{
		if (!type.compare(check[i]))
			break;
		i++;
	}
	switch(i)
	{
		case 0:
		{
			to_ret = new RobotomyRequestForm(name);
			std::cout << "Intern creates Robotomy Request form" << std::endl;
			return (to_ret);
		}
		case 1:
		{
			to_ret = new PresidentialPardonForm(name);
			std::cout << "Intern creates Presidential Pardon form" << std::endl;
			return (to_ret);
		}
		case 2:
		{
						
			to_ret = new ShrubberyCreationForm(name);
			std::cout << "Intern creates Shrubbery Creation form" << std::endl;
			return (to_ret);
		}
	}
       std::cout << "Intern could not create form!" << std::endl;
	   throw Intern::FormDoesNotExist();
}