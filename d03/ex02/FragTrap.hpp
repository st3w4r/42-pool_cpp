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
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		void _initValue(void);
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

		void vaulthunter_dot_exe(std::string const & target);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
};

#endif /* end of include guard: FRAG_TRAP_HPP */
