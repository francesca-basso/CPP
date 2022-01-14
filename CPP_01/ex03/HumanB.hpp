/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasso <fbasso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:35:55 by fbasso            #+#    #+#             */
/*   Updated: 2021/10/08 10:35:56 by fbasso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		Weapon*			weapon;
		std::string 	name;
		void			attack(void);
		void			setWeapon(Weapon &to_set);
};

#endif