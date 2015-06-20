/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 22:59:31 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/20 22:59:32 by ybarbier         ###   ########.fr       */
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

Character::~Character(void)
{
	return;
}

Character & Character::operator=(Character const & rhs)
{
	return *this;
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{

}


void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter& target)
{

}
