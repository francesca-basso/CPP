/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasso <fbasso@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:07:53 by fbasso            #+#    #+#             */
/*   Updated: 2021/10/22 10:07:54 by fbasso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap trap("ciaoa");

	trap.whoAmI();
	trap.attack("tu zia");
	trap.guardGate();
	trap.highFivesGuys();

	return (0);
}