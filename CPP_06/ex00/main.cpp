#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

int	is_argv_checkable(std::string str_to_check)
{
	if (str_to_check[0] >= 33 && str_to_check[0] <= 126)
	{
		if (str_to_check[1] >= 33 && str_to_check[1] <= 126)
		{
			if ((str_to_check.compare("-inf") == 0 || str_to_check.compare("+inf") == 0 || str_to_check.compare("inf") == 0 || str_to_check.compare("nan") == 0
				|| str_to_check.compare("nanf") == 0 || str_to_check.compare("-inff") == 0 || str_to_check.compare("nanf") == 0 || str_to_check.compare("+inff") == 0  || str_to_check.compare("inff") == 0 ))
					return (1);	
			else
			{
				return (0);
			}
		}

	}
	return (1);
}

int main(int argc, char **argv)
{
	if (argc > 2 || argc == 1)
		return (0);
	std::string str_1(argv[1]);
	int len = str_1.length();

	int		num_int;
	float	num_float;
	double	num_double;
	char	num_char;

	int is_int_displayable = 1;
	int is_char_displayable = 1;
	int is_char_impossible = 1;


	switch (len)
	{
	case 1:
		if (str_1[0] <= '9' && str_1[0] >= '0')
		{
			num_int = atoi(argv[1]);
			num_float = static_cast<float>(num_int);
			num_double = static_cast<double>(num_int);
			is_char_displayable = 0;
		//	num_char = argv[1][0];// non displayable
		}
		else
		{
			num_char = argv[1][0];
			num_int = static_cast<int>(num_char);
			num_double = static_cast<double>(num_char);
			num_float = static_cast<float>(num_char);
		}
		break;
	default:
		break;
	}
	if (len > 1)
	{
		if (str_1[str_1.length() - 1] == 'f' || str_1.compare("nan") == 0)
		{
			num_float = atof(argv[1]);
			num_int = static_cast<int>(num_float);
			if ((num_int >= 0 && num_int <= 32) || num_int >= 127)
				is_char_displayable = 0;
			num_double = static_cast<double>(num_float);
			num_char = static_cast<char>(num_int);
			if ((str_1.compare("-inf") == 0 || str_1.compare("+inf") == 0 || str_1.compare("inf") == 0 || str_1.compare("nan") == 0
				|| str_1.compare("nanf") == 0 || str_1.compare("-inff") == 0 || str_1.compare("nanf") == 0 || str_1.compare("+inff") == 0  || str_1.compare("inff") == 0 ))
			{
				is_char_impossible = 0;
				is_int_displayable = 0;
			}
		}
		else if (is_argv_checkable(str_1) == 0 && atoi(argv[1]) == 0)
		{
			std::cout << "Error" << std::endl;
			return (0);
		}
		else
		{
			num_float = atof(argv[1]);
			num_int = static_cast<int>(num_float);
			num_double = static_cast<double>(num_float);
			num_char = static_cast<char>(num_int);
			if ((num_int >= 0 && num_int <= 32) || num_int >= 127)
				is_char_displayable = 0;
			
		}
	}
	if (is_char_displayable == 1 && is_char_impossible == 1)
		std::cout <<  "char: " << num_char << std::endl;
	else if (!is_char_impossible)
		std::cout <<  "char: impossible" << std::endl;
	else if (!is_char_displayable)
		std::cout << "char: not displayable" << std::endl;
	if (is_int_displayable)
		std::cout << "int: " << num_int << std::endl;
	else
		std::cout <<  "int: impossible" << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << num_float << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << num_double << std::endl;
}