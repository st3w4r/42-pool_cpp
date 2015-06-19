/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 13:48:17 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 13:48:18 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 50, 8)
{
	return;
}

PowerFist::PowerFist(PowerFist const & src)
{
	*this = src;
	return;
}

PowerFist::~PowerFist(void)
{
	return;
}

PowerFist & PowerFist::operator=(PowerFist const & rhs)
{
	// this->_name = rhs.getName();
	// this->_domage = rhs.getDamage();
	// this->_apcost = rhs.getAPCost();
	// this->setName(rhs.getName());
	// this->setName(rhs.getName());
	this->setName(rhs.getName());
	this->setDamage(rhs.getDamage());
	this->setAPCost(rhs.getAPCost());
	return *this;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
