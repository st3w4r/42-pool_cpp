/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 13:48:33 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 13:48:34 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
	return;
}

Enemy::Enemy(int hp, std::string const & type) : _HP(hp), _type(type)
{
	return;
}

Enemy::Enemy(Enemy const & src)
{
	*this = src;
	return;
}

Enemy::~Enemy(void)
{
	return;
}

Enemy & Enemy::operator=(Enemy const & rhs)
{
	this->_HP = rhs._HP;
	this->_type = rhs._type;
	return *this;
}

void Enemy::takeDamage(int damage)
{
	if ((this->_HP - damage) <= 0)
		this->_HP = 0;
	else
		this->_HP -= damage;
}

std::string const Enemy::getType() const
{
	return (this->_type);
}

int Enemy::getHP() const
{
	return (this->_HP);
}

void Enemy::setType(std::string type)
{
	this->_type = type;
}

void Enemy::setHP(int hp)
{
	this->_HP = hp;
}
