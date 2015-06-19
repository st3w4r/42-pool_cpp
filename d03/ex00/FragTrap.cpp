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

FragTrap::FragTrap(void) : _name("FragTrap"),
							_hitPoints(100),
							_maxHitPoints(100),
							_energyPoints(100),
							_maxEnergyPoints(100),
							_level(1),
							_meleAttackDamage(30),
							_rangedAttackDamage(20),
							_armorDamageReduction(5)
{
	std::srand(std::time(NULL));
	std::cout << "I am cloaking..." << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : _name(name),
										_hitPoints(100),
										_maxHitPoints(100),
										_energyPoints(100),
										_maxEnergyPoints(100),
										_level(1),
										_meleAttackDamage(30),
										_rangedAttackDamage(20),
										_armorDamageReduction(5)
{
	std::srand(std::time(NULL));
	std::cout << "I am cloaking..." << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	std::srand(std::time(NULL));
	std::cout << "I am cloaking..." << std::endl;
	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Kill! Reload! Kill! Reload! KILL! RELOAD!" << std::endl;
	return;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
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

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP "
			<< this->_name << " attacks "
			<< target << " at range, causing "
			<< this->_rangedAttackDamage << " points of damage !" << std::endl;

}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP "
			<< this->_name << " attacks "
			<< target << " at mele, causing "
			<< this->_meleAttackDamage << " points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	amount = (amount - this->_armorDamageReduction);
	if (amount >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;

	std::cout << "FR4G-TP "
			<< amount
			<< " points take dommage !" << std::endl;
	std::cout << "FR4G-TP "
			<< this->_hitPoints
			<< " hit points !" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{

	if ((this->_hitPoints + amount) >= this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints += amount;

	std::cout << "FR4G-TP "
			<< amount
			<< " points repaired !" << std::endl;
	std::cout << "FR4G-TP "
			<< this->_hitPoints
			<< " hit points !" << std::endl;
}


void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int val;
	void (FragTrap::*arrAction[5])(std::string const & target) =
									{
										&FragTrap::_actionKillbot,
										&FragTrap::_actionRepulsive,
										&FragTrap::_actionCombustion,
										&FragTrap::_actionHammer,
										&FragTrap::_actionHyperion
									};
	int energy = (int)this->_energyPoints - 25;
	if (energy >= 0)
	{
		this->_energyPoints -= 25;
		val = rand() % 5;
		(this->*arrAction[val])(target);
	}
	else
		std::cout << "Issufistant enery !" << std::endl;
	std::cout << "FR4G-TP Energy "
			<< this->_energyPoints
			<< " points !" << std::endl;
}

void FragTrap::_actionKillbot(std::string const & target)
{
	std::cout << "Attack Killbot" << std::endl;
	this->rangedAttack(target);

}

void FragTrap::_actionRepulsive(std::string const & target)
{
	std::cout << "Attack Repulsive" << std::endl;
	this->rangedAttack(target);
}

void FragTrap::_actionCombustion(std::string const & target)
{
	std::cout << "Attack Combustion" << std::endl;
	this->meleeAttack(target);
}

void FragTrap::_actionHammer(std::string const & target)
{
	std::cout << "Attack Hammer" << std::endl;
	this->meleeAttack(target);
}

void FragTrap::_actionHyperion(std::string const & target)
{
	std::cout << "Attack Hyperion" << std::endl;
	this->rangedAttack(target);
}

// __Getter__

int FragTrap::getHitPoints()
{
	return this->_hitPoints;
}
