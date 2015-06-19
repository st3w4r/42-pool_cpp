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

Character(std::string const & name) : _name(name), _ap(40), _weapon(NULL)
{
	return;
}


Character::~Character(void)
{
	return;
}

Character & Character::operator=(Character const & rhs)
{
	return *this;
}

void Character::recoverAP()
{
	if ((this->_ap + 10) > 40)
		this->_ap = 40;
	else
		tis->_ap += 10;
}

void Character::equip(AWeapon* weapon)
{
	this->_weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
	if (enemy)
	{
		if (this->_weapon)
		{
			if (this->_ap >= this->_weapon->getAPCost())
			{
				this->_ap -= this->_weapon->getAPCost();
				this->_weapon->atack();
				enemy->takeDamage(this->_weapon->damage);

			std::cout << enemy->getName() << " attacks " << enemy->getType() << " with a "
				<< this->_weapon->getName();

				if (enemy->getHP <= 0)
					delete enemy;
			}
		}
	}

}


//__Getter__
int Character::getAP() const
{
	return this->_ap;
}

std::string Character::getName() const
{
	return this->_name;
}

// void Character::setAP(int ap)
// {
// 	this->_ap = ap;
// }
//
// void Character::setName(std::string name)
// {
// 	this->_name = name;
// }
