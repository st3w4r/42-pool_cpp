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
	std::cout << "############----EX00----###############" << std::endl;
	{
		{
			FragTrap f1;

			while (f1.getHitPoints() > 0)
			{
				f1.beRepaired(5);
				f1.takeDamage(25);
				f1.meleeAttack("Warior");
				f1.rangedAttack("Robot");
				f1.vaulthunter_dot_exe("Man");
				std::cout << std::endl;
				std::cout << "Hit Points: " << f1.getHitPoints() << std::endl;
			}
		}

		std::cout << "_________________" << std::endl;

		{
			FragTrap f2("NOOD");
			while (f2.getHitPoints() > 0)
			{
				f2.beRepaired(5);
				f2.takeDamage(35);
				f2.vaulthunter_dot_exe("Man");

				std::cout << std::endl;
				std::cout << "Hit Points: " << f2.getHitPoints() << std::endl;
			}
		}
	}
	std::cout << "############----EX01----###############" << std::endl;
	{
		std::cout << "_______FR4G_______" << std::endl;
		{
			FragTrap f1;

			while (f1.getHitPoints() > 0)
			{
				f1.beRepaired(5);
				f1.takeDamage(25);
				f1.meleeAttack("Warior");
				f1.rangedAttack("Robot");
				f1.vaulthunter_dot_exe("Man");
				std::cout << std::endl;
				std::cout << "Hit Points: " << f1.getHitPoints() << std::endl;
			}
		}

		std::cout << "_______SC4V_______" << std::endl;
		{
			ScavTrap s1("BOT");
			while (s1.getHitPoints() > 0)
			{
				s1.beRepaired(5);
				s1.takeDamage(35);
				s1.challengeNewcomer("Woman");

				std::cout << std::endl;
				std::cout << "Hit Points: " << s1.getHitPoints() << std::endl;
			}
		}
	}
	std::cout << "############----EX02----###############" << std::endl;
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
	}

	return (0);
}
