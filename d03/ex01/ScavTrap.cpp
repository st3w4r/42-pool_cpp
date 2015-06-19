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

ScavTrap::ScavTrap(void) : _name("ScavTrap"),
							_hitPoints(100),
							_maxHitPoints(100),
							_energyPoints(50),
							_maxEnergyPoints(50),
							_level(1),
							_meleAttackDamage(20),
							_rangedAttackDamage(15),
							_armorDamageReduction(3)
{
	std::srand(std::time(NULL));
	std::cout << "Enterrrrr the CHAMPION!" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : _name(name),
										_hitPoints(100),
										_maxHitPoints(100),
										_energyPoints(50),
										_maxEnergyPoints(50),
										_level(1),
										_meleAttackDamage(20),
										_rangedAttackDamage(15),
										_armorDamageReduction(3)
{
	std::srand(std::time(NULL));
	std::cout << "Enterrrrr the CHAMPION!" << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	std::srand(std::time(NULL));
	std::cout << "Enterrrrr the CHAMPION!" << std::endl;
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Defragmenting!" << std::endl;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_level = rhs._level;
	this->_meleAttackDamage = rhs._meleAttackDamage;
	this->_rangedAttackDamage = rhs._rangedAttackDamage;
	this->_armorDamageReduction = rhs._armorDamageReduction;
	return *this;
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

void ScavTrap::takeDamage(unsigned int amount)
{
	amount = (amount - this->_armorDamageReduction);
	if (amount >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;

	std::cout << "SC4V-TP "
			<< amount
			<< " points take dommage !" << std::endl;
	std::cout << "SC4V-TP "
			<< this->_hitPoints
			<< " hit points !" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{

	if ((this->_hitPoints + amount) >= this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints += amount;

	std::cout << "SC4V-TP "
			<< amount
			<< " points repaired !" << std::endl;
	std::cout << "SC4V-TP "
			<< this->_hitPoints
			<< " hit points !" << std::endl;
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

// __Getter__

int ScavTrap::getHitPoints()
{
	return this->_hitPoints;
}
