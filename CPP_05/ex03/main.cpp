#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	ShrubberyCreationForm f = ShrubberyCreationForm("test");

	// f.createForm();

	Bureaucrat ciccio = Bureaucrat("ciccio", 3);
	RobotomyRequestForm f1 = RobotomyRequestForm("pisellone");
	PresidentialPardonForm f2 = PresidentialPardonForm("ciao");

	Intern idiot = Intern();

	PresidentialPardonForm *down_created = (PresidentialPardonForm*)idiot.makeForm("robotomy request", "Bender");

	down_created->beSigned(ciccio);

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