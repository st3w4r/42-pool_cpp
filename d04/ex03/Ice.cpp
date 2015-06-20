/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 22:13:59 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/20 22:14:00 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	return;
}

Ice::Ice(Ice const & src)
{
	*this = src;
	return;
}

Ice::~Ice(void)
{
	return;
}

Ice & Ice::operator=(Ice const & rhs)
{
	return *this;
}

Ice* Ice::clone() const
{
	return (new Ice);
}

void Ice::use(ICharacter& target)
{
	xp_ += 10;
	std::cout << "* heals " << target._name << "’s wounds *" << std::endl;
}
