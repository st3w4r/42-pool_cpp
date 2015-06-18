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

int main(void)
{
	std::cout << "_______FR4G_______" << std::endl;
	FragTrap *f1 = new FragTrap("Yana");

	while (f1->getHitPoints() > 0)
	{
		f1->beRepaired(5);
		f1->takeDamage(25);
		f1->meleeAttack("Warior");
		f1->rangedAttack("Robot");
		f1->vaulthunter_dot_exe("Man");
		std::cout << std::endl;
		std::cout << "Hit Points: " << f1->getHitPoints() << std::endl;
	}
	delete f1;

	std::cout << "_______SC4V_______" << std::endl;

	ScavTrap *s1 = new ScavTrap("Paul");
	while (s1->getHitPoints() > 0)
	{
		s1->beRepaired(5);
		s1->takeDamage(35);
		s1->challengeNewcomer("Woman");

		std::cout << std::endl;
		std::cout << "Hit Points: " << s1->getHitPoints() << std::endl;
	}
	delete s1;

	return (0);
}
