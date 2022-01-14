/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stribuzi <stribuzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:11:06 by stribuzi          #+#    #+#             */
/*   Updated: 2021/10/08 11:53:44 by stribuzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
    Karen   karen;

	karen.complain("DEBUG");
	karen.complain("WARNING");
	karen.complain("INFO");
	karen.complain("ERROR");
    return (0);
}