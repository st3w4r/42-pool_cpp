/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 22:13:39 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/20 22:13:41 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : xp_(0)
{
	return;
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
	return;
}

AMateria::~AMateria(void)
{
	return;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	return *this;
}

std::string const & AMateria::getType() const
{
	return type_;
}

unsigned int AMateria::getXP() const
{
	return xp_;
}
