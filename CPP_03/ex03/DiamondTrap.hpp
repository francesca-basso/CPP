/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasso <fbasso@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:07:38 by fbasso            #+#    #+#             */
/*   Updated: 2021/10/22 10:07:38 by fbasso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
		{
			std::cout << "DiamondTrap constructor called." << std::endl;
			this->_name = name;
			ClapTrap::_name = name.append("_clap_name");
			this->_hitpoints = FragTrap::_hitpoints;
			this->_energy_points = ScavTrap::_energy_points;
			this->_attack_damage = FragTrap::_attack_damage;
		};
		DiamondTrap(const DiamondTrap &old_name) : ClapTrap(old_name), ScavTrap(old_name), FragTrap(old_name)
		{
			this->_name = old_name._name;
			std::cout << "DiamondTrap copy costructor" << std::endl;
		};
		DiamondTrap &operator= (const DiamondTrap &value);
		void		attack(std::string const & target);
		void		whoAmI();
		void		guardGate();
		void		highFivesGuys(void);
		~DiamondTrap();
};

#endif