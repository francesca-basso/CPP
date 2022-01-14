/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stribuzi <stribuzi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:59:20 by stribuzi          #+#    #+#             */
/*   Updated: 2021/08/18 16:05:39 by stribuzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	
	int i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			int j = 0;
			while (argv[i][j])
			{
				putchar(toupper(argv[i][j]));
				j++;
			}
			if (i != argc - 1)
				putchar(' ');
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}