/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stribuzi <stribuzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:11:10 by stribuzi          #+#    #+#             */
/*   Updated: 2021/10/08 11:53:51 by stribuzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
#define KAREN_H

#include <iostream>

class Karen
{
	void	debug(void);
	void	info( void );
	void	warning( void );
	void	error( void );
	public:
		void complain(std::string level );
};

#endif