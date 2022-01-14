/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasso <fbasso@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:07:48 by fbasso            #+#    #+#             */
/*   Updated: 2021/10/22 10:07:48 by fbasso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name) : ClapTrap(name)
		{
			std::cout << "FragTrap constructor called." << std::endl;
			this->_name = name;
			this->_hitpoints = 100;
			this->_energy_points = 100;
			this->_attack_damage = 30;
		};
		~FragTrap();
		FragTrap(const FragTrap &old_name) : ClapTrap(old_name)
		{
				this->_name = old_name._name;
				std::cout << "FragTrap copy costructor" << std::endl;
		};
		FragTrap &operator= (const FragTrap &value);
		void highFivesGuys(void);
		void attack(std::string const & target);
};

#endif