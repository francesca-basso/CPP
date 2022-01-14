/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stribuzi <stribuzi@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:12:09 by stribuzi          #+#    #+#             */
/*   Updated: 2021/08/21 21:12:10 by stribuzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void    announce(void);
		void	set_name(std::string name_to_insert);
	private:
		std::string name;
};

Zombie* newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif