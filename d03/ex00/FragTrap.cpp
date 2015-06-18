/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 09:02:37 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/18 09:02:38 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _name(name)
{
	std::cout << "CONSTRUCTOR";
	return;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << "DESTROY";
	return;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hitsPoints = rhs._hitsPoints;
	this->_macHitsPoints = rhs._macHitsPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_level = rhs._level;
	this->_meleattackDamage = rhs._meleattackDamage;
	this->_rangedAttackDamage = rhs._rangedAttackDamage;
	this->_armorDamageReduction = rhs._armorDamageReduction;
	return *this;
}


// __Functions__

void FragTrap::_rangedAttack(std::string const & target)
{

	std::cout << "FR4G-TP "
			<< this->_name << " attacks "
			<< target << " at range, causing"
			<< this->_rangedAttackDamage << " points of damage !";

}

void FragTrap::_meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP "
			<< this->_name << " attacks "
			<< target << " at range, causing"
			<< this->_meleattackDamage << " points of damage !";
}

void FragTrap::_takeDamage(unsigned int amount)
{
	amout -= this->_armorDamageReduction;
	if ((this->_hisPoints - amout) < 0)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
}

void FragTrap::_beRepaired(unsigned int amount)
{
	if ((this->_hisPoints + amout) > 100)
		this->_hisPoints = 100;
	else
		this->_hisPoints -= amout;
}

void FragTrap::r_dot_exe(std::string const & target)
{
	if ((this->_eneryPoints - 25) > 0)
	{

	}
	else
		std::cout << "You don't have enery !" << std::endl;
}

// __Getter__
/*
std::string getName()
{
	return this->_name;
}

int FragTrap::getHitPoints()
{
	return this->_hitsPoints;
}

int FragTrap::getMaxHitPoints()
{
	return this->_macHitsPoints;
}

int FragTrap::getEnergyPoints()
{
	return this->_energyPoints;
}

int FragTrap::getMaxEnergyPoints()
{
	return this->_maxEnergyPoints;
}

int FragTrap::getLevel()
{
	return this->_level;
}

int FragTrap::getMeleattackDamage()
{
	return this->_meleattackDamage;
}

int FragTrap::getRangedAttackDamage()
{
	return this->_rangedAttackDamage;
}

int FragTrap::getArmorDamageReduction()
{
	return this->_armorDamageReduction;
}
*/
