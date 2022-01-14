/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasso <fbasso@student.42roma.it>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:05:45 by fbasso            #+#    #+#             */
/*   Updated: 2021/10/22 10:05:46 by fbasso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap trap1("trap1");

	trap1.attack("tua madre");
	trap1.takeDamage(5);
	trap1.beRepaired(4);
	return (0);
}