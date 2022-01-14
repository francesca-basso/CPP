#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Form form1 = Form("form1", 10, 10);

	Bureaucrat	sam = Bureaucrat("sam", 5);

	Form form2 = Form("form2", 2, 10);

	//form2.beSigned(sam);

	sam.signForm(form1);


	try
	{
		form2.beSigned(sam);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
}