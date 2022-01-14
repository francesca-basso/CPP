/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasso <fbasso@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:06:07 by fbasso            #+#    #+#             */
/*   Updated: 2021/10/22 10:06:08 by fbasso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap trap("Trap");

	ClapTrap *trappola = new ScavTrap("cioccione");

	trappola->attack("tu zia");

	trap.attack("you");
	trap.takeDamage(4);
	trap.beRepaired(3);
	trap.guardGate();

	delete trappola;
	return (0);
}