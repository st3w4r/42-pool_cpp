/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 22:20:14 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/18 22:20:15 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
	this->_initValue();
	std::srand(std::time(NULL));
	std::cout << "Je suis un SUPER Hero Si t'as pas mal , tu vaut que dalle" << std::endl;
	return;
}

SuperTrap::SuperTrap(std::string name)
{
	std::srand(std::time(NULL));
	this->_initValue();
	this->_name = name;
	std::cout << "Je suis un SUPER Hero Si t'as pas mal , tu vaut que dalle" << std::endl;
	return;
}

SuperTrap::SuperTrap(SuperTrap const & src)
{
	*this = src;
	std::srand(std::time(NULL));
	std::cout << "Je suis un SUPER Hero Si t'as pas mal , tu vaut que dalle" << std::endl;
	return;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "Mort définitive. Mort infinie... infinitive... !!!!" << std::endl;
	return;
}

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::_initValue(void)
{
	this->_name = "SuperTrap";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
}
