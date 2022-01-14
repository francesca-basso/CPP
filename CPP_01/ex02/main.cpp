/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stribuzi <stribuzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:12:18 by stribuzi          #+#    #+#             */
/*   Updated: 2021/10/08 11:32:48 by stribuzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string stringa = "HI THIS IS BRAIN";
	std::string *stringPTR = &stringa;
	std::string &strREF = stringa;
	std::cout << *stringPTR << std::endl;
	std::cout << strREF << std::endl;

	std::cout << stringPTR << std::endl;
	std::cout << &strREF << std::endl;

	return (0);
}