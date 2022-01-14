/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stribuzi <stribuzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:12:34 by stribuzi          #+#    #+#             */
/*   Updated: 2021/10/08 11:42:33 by stribuzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments!" << std::endl;
		return (0);
	}
    std::string file_to_open = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    ft_replace(file_to_open, s1, s2);
    return 0;
}