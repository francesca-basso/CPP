/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasso <fbasso@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:06:16 by fbasso            #+#    #+#             */
/*   Updated: 2021/10/22 10:06:17 by fbasso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_name = "0";
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &value)
{
	std::cout << "ScavTrap assignation operator" << std::endl;
	this->_name = value._name;
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap has entered gate keeper mode." << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " of damage."<< std::endl; 
}