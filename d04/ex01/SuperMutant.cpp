/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 13:48:43 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 13:48:44 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return;
}

SuperMutant::SuperMutant(SuperMutant const & src)
{
	*this = src;
	return;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
	return;
}

SuperMutant & SuperMutant::operator=(SuperMutant const & rhs)
{
	this->setHP(rhs.getHP());
	this->setType(rhs.getType());
	return *this;
}

void SuperMutant::takeDamage(int damage)
{
	damage -= 3;
	if ((this->getHP() - damage) <= 0)
		this->setHP(0);
	else
		this->setHP((this->getHP() - damage));
}
