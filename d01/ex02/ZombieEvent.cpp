/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 11:06:09 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/16 11:06:10 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	std::cout << "New event" << std::endl;
	return;
}

ZombieEvent::ZombieEvent(std::string zombieType) : _zombieType(zombieType)
{
	std::cout << "New event type [" << this->_zombieType << "]" << std::endl;
	return;
}


ZombieEvent::~ZombieEvent()
{
	std::cout << "End event" << std::endl;
	return;
}

void ZombieEvent::setZombieType(std::string zombieType)
{
	this->_zombieType = zombieType;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->_zombieType));
}

Zombie *ZombieEvent::randomChump()
{

	return (new Zombie(name, this->_zombieType));
}
