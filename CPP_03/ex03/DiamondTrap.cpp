/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasso <fbasso@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:07:32 by fbasso            #+#    #+#             */
/*   Updated: 2021/10/22 10:07:33 by fbasso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_name = "0";
	this->_attack_damage = 0;
	this->_hitpoints = 10;
	this->_energy_points = 10;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &value)
{
	std::cout << "DiamondTrap assignation operator" << std::endl;
	this->_name = value._name;
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "ClapTrap Name: " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
};

void	DiamondTrap::guardGate()
{
	ScavTrap::guardGate();
}

void	DiamondTrap::highFivesGuys(void)
{
	FragTrap::highFivesGuys();
}