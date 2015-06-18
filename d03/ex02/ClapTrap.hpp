/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 17:21:40 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/18 17:21:40 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
	private:

	protected:
		std::string _name;
		unsigned int _hitPoints,
					_maxHitPoints,
					_energyPoints,
					_maxEnergyPoints,
					_level,
					_meleAttackDamage,
					_rangedAttackDamage,
					_armorDamageReduction;

	public:
		ClapTrap(void);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);

		ClapTrap & operator=(ClapTrap const & rhs);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		// __Getter__
		int getHitPoints();
};

#endif // END: CLAP_TRAP_HPP
