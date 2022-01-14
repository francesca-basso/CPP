/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stribuzi <stribuzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:39:44 by fbasso            #+#    #+#             */
/*   Updated: 2021/10/08 11:41:13 by stribuzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

std::string ft_replace_supp(std::string &supp, std::string &s1, std::string &s2)
{
    int i;
    std::stringstream supp_2;
    int s1_len;
    int j;

    s1_len = s1.length();
    i = 0;
    while(i < supp.length())
    {
        j = 0;
        while(supp[i + j] == s1[j] && j < s1_len)
            j++;
        if (j == s1_len)
        {
            supp_2 << s2;
            i += (j - 1);
        }
        else
            supp_2 << supp[i];
        i++;
    }
    return (supp_2.str());
}

void ft_replace(std::string &file_to_open, std::string &s1, std::string &s2)
{
    std::ifstream file(file_to_open);

	if (!file.is_open())
	{
		std::cout << "Unable to open file!" << std::endl;
		return ;
	}

    std::ofstream file_to_replace(file_to_open.append(".replace"));
    std::string supp;

    while(std::getline(file, supp))
    {
        file_to_replace << ft_replace_supp(supp, s1, s2);
        if (!file.eof())
            file_to_replace << std::endl;
    }
    file.close();
    file_to_replace.close();
}
