/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stribuzi <stribuzi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:12:13 by stribuzi          #+#    #+#             */
/*   Updated: 2021/08/21 21:12:14 by stribuzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*to_return;
	int		i = 0;

	to_return = new Zombie[N];
	while (i < N)
	{
		to_return[i].set_name(name);
		i++;
	}
	return (to_return);
}