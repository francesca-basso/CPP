/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasso <fbasso@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:06:56 by fbasso            #+#    #+#             */
/*   Updated: 2021/10/22 10:06:57 by fbasso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap trap("Trap");

	trap.attack("you");
	trap.takeDamage(4);
	trap.beRepaired(3);
	trap.highFivesGuys();

	return (0);
}