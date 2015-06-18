/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 09:02:37 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/18 09:02:38 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_initValue();
	std::srand(std::time(NULL));
	std::cout << "Enterrrrr the CHAMPION!" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name)
{
	std::srand(std::time(NULL));
	this->_initValue();
	this->_name = name;
	std::cout << "Enterrrrr the CHAMPION!" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Defragmenting!" << std::endl;
	return;
}

void ScavTrap::_initValue(void)
{
	this->_name = "ScavTrap";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
}

// __Functions__

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4G-TP "
			<< this->_name << " attacks "
			<< target << " at range, causing "
			<< this->_rangedAttackDamage << " points of damage !" << std::endl;

}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4G-TP "
			<< this->_name << " attacks "
			<< target << " at mele, causing "
			<< this->_meleAttackDamage << " points of damage !" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	int val;
	void (ScavTrap::*arrAction[5])(std::string const & target) =
									{
										&ScavTrap::_actionChallenge1,
										&ScavTrap::_actionChallenge2,
										&ScavTrap::_actionChallenge3,
										&ScavTrap::_actionChallenge4,
										&ScavTrap::_actionChallenge5
									};
	val = rand() % 5;
	(this->*arrAction[val])(target);
}

void ScavTrap::_actionChallenge1(std::string const & target)
{
	std::cout << "Hey " << target << " Kill 2500 Human Enemies" << std::endl;
}

void ScavTrap::_actionChallenge2(std::string const & target)
{
	std::cout << "Hey " << target << " Win 1,000 Duels" << std::endl;
}

void ScavTrap::_actionChallenge3(std::string const & target)
{
	std::cout << "Hey " << target << " Get 2,500 kills with Combat Rifles" << std::endl;
}

void ScavTrap::_actionChallenge4(std::string const & target)
{
	std::cout << "Hey " << target << " Open 5,000 lootable objects" << std::endl;
}

void ScavTrap::_actionChallenge5(std::string const & target)
{
	std::cout << "Hey " << target << " Buy 500 Items" << std::endl;
}
