/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 17:21:36 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/18 17:21:37 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::srand(std::time(NULL));
	std::cout << "ClapTrap BOOT" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap is destroy..." << std::endl;
	return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
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

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "CL4P-TP "
			<< this->_name << " attacks "
			<< target << " at range, causing "
			<< this->_rangedAttackDamage << " points of damage !" << std::endl;

}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "CL4P-TP "
			<< this->_name << " attacks "
			<< target << " at mele, causing "
			<< this->_meleAttackDamage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	amount = (amount - this->_armorDamageReduction);
	if (amount >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;

	std::cout << "[" << this->_name << "] "
			<< amount
			<< " points take dommage !" << std::endl;
	std::cout << "[" << this->_name << "] "
			<< this->_hitPoints
			<< " hit points !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{

	if ((this->_hitPoints + amount) >= this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints += amount;

	std::cout << "[" << this->_name << "] "
			<< amount
			<< " points repaired !" << std::endl;
	std::cout << "[" << this->_name << "] "
			<< this->_hitPoints
			<< " hit points !" << std::endl;
}

// __Getter__
int ClapTrap::getHitPoints()
{
	return this->_hitPoints;
}
/*
// __Getter__
std::string getName()
{
	return this->_name;
}

int ClapTrap::getHitPoints()
{
	return this->_hitPoints;
}

int ClapTrap::getMaxHitPoints()
{
	return this->_macHitsPoints;
}

int ClapTrap::getEnergyPoints()
{
	return this->_energyPoints;
}

int ClapTrap::getMaxEnergyPoints()
{
	return this->_maxEnergyPoints;
}

int ClapTrap::getLevel()
{
	return this->_level;
}

int ClapTrap::getMeleattackDamage()
{
	return this->_meleattackDamage;
}

int ClapTrap::getRangedAttackDamage()
{
	return this->_rangedAttackDamage;
}

int ClapTrap::getArmorDamageReduction()
{
	return this->_armorDamageReduction;
}


// __Setter__
void setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::setHitPoints(int hitsPoints)
{
	this->_hitsPoints = hitsPoints;
}

void ClapTrap::setMaxHitPoints(int maxHitsPoints)
{
	this->_maxHitsPoints = maxHitsPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
	this->_energyPoints = energyPoints;
}

void ClapTrap::setMaxEnergyPoints(int maxEnergyPoints)
{
	this->_maxEnergyPoints = maxEnergyPoints;
}

void ClapTrap::setLevel(int level)
{
	this->_level = level;
}

void ClapTrap::setMeleattackDamage(int meleattackDamage)
{
	this->_meleattackDamage = meleattackDamage;
}

void ClapTrap::setRangedAttackDamage(int rangedAttackDamage)
{
	this->_rangedAttackDamage = rangedAttackDamage;
}

void ClapTrap::setArmorDamageReduction(int armorDamageReduction)
{
	this->_armorDamageReduction = armorDamageReduction;
}*/
