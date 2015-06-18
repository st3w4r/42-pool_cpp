/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 09:02:42 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/18 09:02:43 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>

class ScavTrap
{
	private:
		std::string _name;
		unsigned int _hitPoints,
					_maxHitPoints,
					_energyPoints,
					_maxEnergyPoints,
					_level,
					_meleAttackDamage,
					_rangedAttackDamage,
					_armorDamageReduction;

		void _actionChallenge1(std::string const & target);
		void _actionChallenge2(std::string const & target);
		void _actionChallenge3(std::string const & target);
		void _actionChallenge4(std::string const & target);
		void _actionChallenge5(std::string const & target);

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const & rhs);

		void challengeNewcomer(std::string const & target);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		// __Getter__
		int getHitPoints();
};

#endif /* end of include guard: FRAG_TRAP_HPP */
