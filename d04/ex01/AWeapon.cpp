/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 13:46:29 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 13:46:30 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
	return;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _damage(damage),  _apcost(apcost)
{
	return;
}

AWeapon::AWeapon(AWeapon const & src)
{
	*this = src;
	return;
}

AWeapon::~AWeapon(void)
{
	return;
}

AWeapon & AWeapon::operator=(AWeapon const & rhs)
{
	this->_name = rhs._name;
	this->_damage = rhs._damage;
	this->_apcost = rhs._apcost;
	return *this;
}

// __Getter__
std::string const AWeapon::getName() const
{
	return this->_name;
}

int AWeapon::getDamage() const
{
	return this->_damage;
}

int AWeapon::getAPCost() const
{
	return this->_apcost;
}

// __Settter__
void AWeapon::setName(std::string name)
{
	this->_name = name;
}

void AWeapon::setDamage(int damage)
{
	this->_damage = damage;
}

void AWeapon::setAPCost(int apcost)
{
	this->_apcost = apcost;

}
