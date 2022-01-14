/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stribuzi <stribuzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:11:42 by stribuzi          #+#    #+#             */
/*   Updated: 2021/10/08 11:24:51 by stribuzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "ovuvuevuevue enyetuenwuevue ugbemugbem osas";
}

Zombie::Zombie(std::string name_to_insert)
{
	this->name = name_to_insert;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " is gone." << std::endl;
}

void    Zombie::announce(void)
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}