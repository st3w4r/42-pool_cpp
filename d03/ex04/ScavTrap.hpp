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
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		void _initValue(void);
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

		void challengeNewcomer(std::string const & target);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
};

#endif /* end of include guard: FRAG_TRAP_HPP */
