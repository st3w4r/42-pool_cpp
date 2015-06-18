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
		unsigned int _hitPoints,
					_maxHitPoints,
					_energyPoints,
					_maxEnergyPoints,
					_level,
					_meleAttackDamage,
					_rangedAttackDamage,
					_armorDamageReduction;

		void _actionKillbot(std::string const & target);
		void _actionRepulsive(std::string const & target);
		void _actionCombustion(std::string const & target);
		void _actionHammer(std::string const & target);
		void _actionHyperion(std::string const & target);

	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);
		FragTrap & operator=(FragTrap const & rhs);

		void vaulthunter_dot_exe(std::string const & target);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		// __Getter__
		int getHitPoints();
};

#endif /* end of include guard: FRAG_TRAP_HPP */
