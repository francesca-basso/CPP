/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stribuzi <stribuzi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:11:58 by stribuzi          #+#    #+#             */
/*   Updated: 2021/08/21 21:11:58 by stribuzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *horde;

	horde = zombieHorde(10, "Pisellone");

	int i = 0;
	while (i < 10)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
	return (0);
}