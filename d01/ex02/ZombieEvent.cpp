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
	std::srand(std::time(NULL));
	ZombieEvent::_initNames();
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

void ZombieEvent::_initNames()
{
	_arrNames[0] = "Apollon";
	_arrNames[1] = "Blaise";
	_arrNames[2] = "David";
	_arrNames[3] = "Pascale";
	_arrNames[4] = "Dance";
	_arrNames[5] = "Dance";
	_arrNames[6] = "Simone";
	_arrNames[7] = "Florent";
	_arrNames[8] = "Julien";
	_arrNames[9] = "Zoé";
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
	int val;

	val = rand() % 10 ;
	return (new Zombie(_arrNames[val], this->_zombieType));
}
