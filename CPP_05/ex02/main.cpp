#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm f = ShrubberyCreationForm("test");

	// f.createForm();

	Bureaucrat ciccio = Bureaucrat("ciccio", 3);
	RobotomyRequestForm f1 = RobotomyRequestForm("pisellone");
	PresidentialPardonForm f2 = PresidentialPardonForm("ciao");

	try
	{
		f2.beSigned(ciccio);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		f.execute(ciccio);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		f1.execute(ciccio);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		f2.execute(ciccio);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

}