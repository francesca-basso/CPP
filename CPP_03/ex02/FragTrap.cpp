/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasso <fbasso@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:06:44 by fbasso            #+#    #+#             */
/*   Updated: 2021/10/22 10:06:45 by fbasso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_name = "0";
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &value)
{
	std::cout << "FragTrap assignation operator" << std::endl;
	this->_name = value._name;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High Five?" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " of damage."<< std::endl;
}