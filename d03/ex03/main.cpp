/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 09:02:48 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/18 09:02:49 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	std::cout << "_______FR4G_______" << std::endl;
	FragTrap *f1 = new FragTrap("Robot");

	std::cout << "_______SC4V_______" << std::endl;
	ScavTrap *s1 = new ScavTrap("Warior");

	std::cout << "_______NINJA_______" << std::endl;
	NinjaTrap *n1 = new NinjaTrap("Boss");

	n1->takeDamage(20);
	n1->beRepaired(10);

	n1->ninjaShoebox(*n1);
	n1->ninjaShoebox(*f1);
	n1->ninjaShoebox(*s1);

	std::cout << "_______NINJA_______" << std::endl;
	delete n1;
	std::cout << "_______SC4V_______" << std::endl;
	delete s1;
	std::cout << "_______FR4G_______" << std::endl;
	delete f1;

	return (0);
}
