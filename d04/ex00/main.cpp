/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 10:41:39 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 10:41:40 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"

int main()
{
	{
		Sorcerer robert("Robert", "the Magnificent");
		Victim jim("Jimmy");
		Peon joe("Joe");
		Victim jack(joe);
		std::cout << robert << jim << joe;
		robert.polymorph(jim);
		robert.polymorph(joe);
	}
	std::cout << "_____________" << std::endl;
	{
		Sorcerer robert("Robert", "the Magnificent");
		Victim *jack = new Peon("Joe");;
		robert.polymorph(*jack);
		delete jack;
	}
	return 0;
}
