/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 10:21:39 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/20 10:21:40 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
	return;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src)
{
	std::cout << "* teleports from space *" << std::endl;
	*this = src;
	return;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back ..." << std::endl;
	return;
}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & rhs)
{
	(void)rhs;
	return *this;
}

// __Interface__
ISpaceMarine* AssaultTerminator::clone() const
{
	return (new AssaultTerminator);
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}
void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
