/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 20:39:27 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/18 20:39:28 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
#define NINJA_TRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	private:
		void _initValue(void);

	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const & src);
		~NinjaTrap(void);

		void ninjaShoebox(ClapTrap & clap);
		void ninjaShoebox(NinjaTrap & ninja);
		void ninjaShoebox(FragTrap & frag);
		void ninjaShoebox(ScavTrap & scav);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
};

#endif /* end of include guard: NINJA_TRAP_HPP */
