/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 14:50:31 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/16 14:50:34 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int number) : _number(number)
{
	std::srand(std::time(NULL));
	ZombieHorde::_initNames();
	ZombieHorde::_initHorde(number);
	std::cout << "Horde created" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
	delete [] _arrHordeZombies;
	std::cout << "Horde destructed" << std::endl;
}

void ZombieHorde::_initHorde(int number)
{
	_arrHordeZombies = new Zombie[number];

	for (int i = 0; i < number; i++)
	{
		ZombieHorde::_randomChump(&(_arrHordeZombies[i]));
	}
}

void ZombieHorde::annouceHorde()
{
	for (int i = 0; i < _number; i++)
	{
		_arrHordeZombies[i].announce();
	}
}

void ZombieHorde::_initNames()
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

void ZombieHorde::_randomChump(Zombie *zombie)
{
	int val;

	val = rand() % 10 ;
	zombie->initZombie(_arrNames[val], "Horde");
}
