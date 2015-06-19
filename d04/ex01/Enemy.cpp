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

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
	return
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
	return *this;
}

void Enemy::takeDamage(int damage)
{

}

std::string Enemy::getType()
{

}

int Enemy::getHP()
{

}
