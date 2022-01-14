/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasso <fbasso@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:08:11 by fbasso            #+#    #+#             */
/*   Updated: 2021/10/22 10:08:12 by fbasso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name) : ClapTrap(name)
		{
			std::cout << "ScavTrap constructor called" << std::endl;
			this->_name = name;
			this->_hitpoints = 100;
			this->_energy_points = 50;
			this->_attack_damage = 20;
		};
		~ScavTrap();
		ScavTrap(const ScavTrap &old_name) : ClapTrap(old_name)
		{
				this->_name = old_name._name;
				std::cout << "ScavTrap copy costructor" << std::endl;
		};
		ScavTrap &operator= (const ScavTrap &value);
		void	guardGate();
		void attack(std::string const & target);
};

#endif