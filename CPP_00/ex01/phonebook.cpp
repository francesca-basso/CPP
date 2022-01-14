/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stribuzi <stribuzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:29:06 by stribuzi          #+#    #+#             */
/*   Updated: 2021/10/07 12:19:53 by stribuzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "Contact.hpp"

void	print_single_string(std::string string)
{
	int num_of_spaces = 0;

	if (string.length() <= 10)
	{
		num_of_spaces = 10 - string.length();
		while (num_of_spaces > 0)
		{
			putchar(' ');
			num_of_spaces--;
		}
		std::cout << string << '|';
	}
	else
		std::cout << string.substr(0, 9) << ".|";
}

void	print_contact_details(contact to_print)
{
	if (to_print.get_index() == -1)
		return ;
	int i = 0;
	while (i < 9)
	{
		putchar(' ');
		i++;
	}
	std::cout << to_print.get_index() << '|';
	print_single_string(to_print.get_first_name());
	print_single_string(to_print.get_last_name());
	print_single_string(to_print.get_nickname());
	print_single_string(to_print.get_phone_number());
	print_single_string(to_print.get_darkest_secret());
}

int main(void)
{
	phonebook	book;
	int			index = 0;
	int			check = 0;

	std::string support;

	while (check < 8)
	{
		book.the_book[check].set_index(-1);
		check++;
	}
	std::string command;
	while (command.compare("EXIT"))
	{
		std::getline(std::cin, command);
		if (command.compare("ADD") == 0)
		{
			book.the_book[index].set_index(index);
			std::cout << "Enter first name: ";
			std::getline(std::cin, support);
			book.the_book[index].set_first_name(support);

			std::cout << "Enter last name: ";
			std::getline(std::cin, support);
			book.the_book[index].set_last_name(support);

			std::cout << "Enter nickname: ";
			std::getline(std::cin, support);
			book.the_book[index].set_nickname(support);
			

			std::cout << "Enter phone number: ";
			std::getline(std::cin, support);
			book.the_book[index].set_phone_number(support);

			std::cout << "Enter darkest secret: ";
			std::getline(std::cin, support);
			book.the_book[index].set_darkest_secret(support);
			
			if (index != 7)
				index++;
			else
				index = 0;
		}
		else if (command.compare("SEARCH") == 0)
		{
			int j = 0;
			print_single_string("index");
			print_single_string("first name");
			print_single_string("last name");
			print_single_string("nickname");
			print_single_string("phone number");
			print_single_string("darkest secret");
			std::cout << std::endl;
			while (j < 8)
			{
				print_contact_details(book.the_book[j]);
				std::cout << std::endl;
				j++;
			}
			std::cout << std::endl;
		}
	}
    return (0);
}