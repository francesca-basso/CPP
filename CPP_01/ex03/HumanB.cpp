/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasso <fbasso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:35:50 by fbasso            #+#    #+#             */
/*   Updated: 2021/10/08 10:35:51 by fbasso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon &to_set)
{
	this->weapon = &to_set;
}

void	HumanB::attack(void)
{
	std::string type = *this->weapon->getType();
	std::cout << this->name << " attacks with his " << type << std::endl;
}