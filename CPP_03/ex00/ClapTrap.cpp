/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasso <fbasso@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:05:34 by fbasso            #+#    #+#             */
/*   Updated: 2021/10/22 10:05:36 by fbasso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_name = "0";
	this->_attack_damage = 0;
	this->_hitpoints = 10;
	this->_energy_points = 10;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_name = name;
	this->_attack_damage = 0;
	this->_hitpoints = 10;
	this->_energy_points = 10;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &old_name)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->_name	= old_name._name;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &value)
{
	std::cout << "ClapTrap assignation operator" << std::endl;
	this->_name = value._name;
	return (*this);
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target << " causing " << this->_attack_damage << " of damage."<< std::endl; 
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Ouch. Took " << amount << " of damage. It Hurts!" << std::endl;
	this->_energy_points -= amount;
	if (this->_energy_points < 0)
		this->_energy_points = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Recovering " << amount << " of energy points. This feels good! :)" << std::endl;
	this->_energy_points += amount;
}