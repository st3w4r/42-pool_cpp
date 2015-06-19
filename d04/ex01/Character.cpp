/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 13:49:07 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 13:49:08 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	return;
}

Character::Character(Character const & src)
{
	*this = src;
	return;
}

Character::Character(std::string const & name) : _name(name), _ap(40), _weapon(NULL)
{
	return;
}


Character::~Character(void)
{
	return;
}

Character & Character::operator=(Character const & rhs)
{
	this->_name = rhs._name;
	this->_ap = rhs._ap;
	this->_weapon = rhs._weapon;
	return *this;
}

void Character::recoverAP()
{
	if ((this->_ap + 10) > 40)
		this->_ap = 40;
	else
		this->_ap += 10;
}

void Character::equip(AWeapon* weapon)
{
	this->_weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
	if (!enemy || !this->_weapon)
		return;
	if (this->_ap >= this->_weapon->getAPCost())
	{
		std::cout << _name << " attacks " << enemy->getType() << " with a "
		<< this->_weapon->getName() << std::endl;

		this->_ap -= this->_weapon->getAPCost();
		this->_weapon->attack();
		enemy->takeDamage(this->_weapon->getDamage());

		if (enemy->getHP() <= 0)
			delete enemy;
	}
}


//__Getter__
int Character::getAP() const
{
	return this->_ap;
}

std::string const Character::getName() const
{
	return this->_name;
}

AWeapon * Character::getWeapon() const
{
	return this->_weapon;
}


std::ostream & operator<<(std::ostream & o, Character const & rhs)
{
	if (rhs.getWeapon() != NULL)
	{
		o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a "
			<< rhs.getWeapon()->getName() << std::endl;
	}
	else
	{
		o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
	}
	return o;
}
