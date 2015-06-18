/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 22:20:17 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/18 22:20:18 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
#define NINJA_TRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>

class SuperTrap : public NinjaTrap, public FragTrap
{
	private:
		void _initValue(void);

	public:
		SuperTrap(void);
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const & src);
		~SuperTrap(void);

		// void ninjaShoebox(SuperTrap & ninja);
		// void ninjaShoebox(FragTrap & frag);
		// void ninjaShoebox(ScavTrap & scav);

		// void rangedAttack(std::string const & target);
		// void meleeAttack(std::string const & target);
};

#endif // END: CLAP_TRAP_HPP



• Hit points (Fragtrap)
• Max hit points (Fragtrap)
• Energy points (Ninjatrap)
• Max energy points (Ninjatrap)
• Level (1)
• Name (Parameter of constructor)
• Melee attack damage (Ninjatrap)
• Ranged attack damage (Fragtrap)
13
C++ Pool - d03 Inheritance
• Armor damage reduction (Fragtrap)
• rangedAttack (Fragtrap)
• meleeAttack (Ninjatrap)
It will have the special attacks of both
