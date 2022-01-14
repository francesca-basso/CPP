/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stribuzi <stribuzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:11:26 by stribuzi          #+#    #+#             */
/*   Updated: 2021/10/08 11:29:47 by stribuzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *ciccio;

	ciccio = newZombie("ciccio");

	ciccio->announce();

	Zombie swag = Zombie();

	swag.announce();
	randomChump("altro tizio");
	delete ciccio;
}