/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 13:47:52 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 13:47:53 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 21, 5)
{
	return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src)
{
	*this = src;
	return;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	// this->_name = rhs._name;
	// this->_domage = rhs._damage;
	// this->_apcost = rhs._apcost;
	// this->_name = rhs.getName();
	// this->_domage = rhs.getDamage();
	// this->_apcost = rhs.getAPCost();
	this->setName(rhs.getName());
	this->setDamage(rhs.getDamage());
	this->setAPCost(rhs.getAPCost());
	return *this;
}

// __Methodes__

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
