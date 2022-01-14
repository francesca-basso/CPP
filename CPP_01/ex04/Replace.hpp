/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasso <fbasso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:39:51 by fbasso            #+#    #+#             */
/*   Updated: 2021/10/08 10:39:52 by fbasso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
#define REPLACE_H

#include <iostream>
#include <fstream>
#include <sstream>

std::string	ft_replace_supp(std::string &supp, std::string &s1, std::string &s2);
void		ft_replace(std::string &file_to_open, std::string &s1, std::string &s2);

#endif