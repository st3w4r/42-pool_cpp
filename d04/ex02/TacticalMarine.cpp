/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 10:21:11 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/20 10:21:12 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src)
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
	*this = src;
	return;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh ..." << std::endl;
	return;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & rhs)
{
	return *this;
}

// __Interface__
ISpaceMarine* TacticalMarine::clone() const
{
	TacticalMarine *tacticalMarine = new TacticalMarine;
	// tactialMarine = this;
	return (tacticalMarine);
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT !" << std::endl;
}
void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}
