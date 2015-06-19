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

FragTrap::FragTrap(void)
{
	this->_initValue();
	std::srand(std::time(NULL));
	std::cout << "I am cloaking..." << std::endl;
	return;
}

FragTrap::FragTrap(std::string name)
{
	std::srand(std::time(NULL));
	this->_initValue();
	this->_name = name;
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

void FragTrap::_initValue(void)
{
	this->_name = "FragTrap";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
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
