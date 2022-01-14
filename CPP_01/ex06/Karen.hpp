/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbasso <fbasso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:50:43 by fbasso            #+#    #+#             */
/*   Updated: 2021/10/08 10:50:44 by fbasso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
#define KAREN_H

#include <iostream>
#include <sstream>

class Karen
{
	public:
		void complain(std::string level);
		void message(std::string command);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	
};

enum cases {DEBUG, INFO, WARNING, ERROR};

#endif