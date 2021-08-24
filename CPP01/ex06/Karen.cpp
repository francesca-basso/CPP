#include "Karen.hpp"

void Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! "
	<< "If you did I would not have to ask for it!\n";
}

void Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been "
	<< "coming here for years and you just started working here last month.\n";
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

void Karen::complain(std::string level)
{
	std::string to_check = "DEBUG INFO WARNING ERROR";
	int pos = to_check.find(level);
	int len = level.length();

	switch(pos)
	{
		case 0:
			switch(len)
			{
				case 5:
					this->debug();
					break;
			
				default:
					return;
			}
		case 6:
			switch(len)
			{
				case 4:
					this->info();
					break;
				default:
					return;
			}
		case 11:
			switch (len)
			{
				case 7:
					this->warning();
					break;
				
				default:
					return;
			}
		case 19:
			switch (len)
			{
				case 5:
					this->error();
					break;
				
				default:
					return;
			}
		default:
			break;
	}
}

void Karen::message(std::string command)
{
	Karen karen;
	std::string to_check = "DEBUG INFO WARNING ERROR";
	int pos = to_check.find(command);
	int len = command.length();

	switch(pos)
	{
		case 0:
			switch (len)
			{
				case 5:
					this->debug();
					this->info();
					this->warning();
					this->error();
					break;
				
				default:
					break;
			}
			break;
		case 6:
			switch (len)
			{
				case 4:
					this->info();
					this->warning();
					this->error();
					break;
				
				default:
					break;
			}
		case 11:
			switch (len)
			{
				case 7:
					this->warning();
					this->error();
					break;
				
				default:
					break;
			}
		case 19:
			switch (len)
			{
				case 5:
					this->error();
					break;
				
				default:
					break;
			}
		
		default:
			break;		
	}
}