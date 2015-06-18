/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 09:02:42 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/18 09:02:43 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>

class FragTrap
{
	private:
		std::string _name;
		unsigned int _hitPoints = 100,
					_maxHitPoints = 100,
					_energyPoints = 100,
					_maxEnergyPoints = 100,
					_level = 1,
					_meleAttackDamage = 30,
					_rangedAttackDamage = 20,
					_armorDamageReduction = 5;

		void _rangedAttack(std::string const & target);
		void _meleeAttack(std::string const & target);
		void _takeDamage(unsigned int amount);
		void _beRepaired(unsigned int amount);
	protected:
	public:
		FrapTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);
		FragTrap & operator=(FragTrap const & rhs);

		void r_dot_exe(std::string const & target);

		// __Getter__
		/*
		std::string getName();
		int getHitPoints();
		int getMaxHitPoints();
		int getEnergyPoints();
		int getMaxEnergyPoints();
		int getLevel();
		int getMeleAttachDamage();
		int getRangedAttackDamage();
		int getArmorDamageReduction();
		*/
};

#endif /* end of include guard: FRAG_TRAP_HPP */

• Hit points (100)
• Max hit points (100)
• Energy points (100)
• Max energy points (100)
• Level (1)
• Name (Parameter of constructor)
• Melee attack damage (30)
• Ranged attack damage (20)
• Armor damage reduction (5)
