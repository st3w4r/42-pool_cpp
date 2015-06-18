/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 20:39:31 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/18 20:39:32 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	this->_initValue();
	std::srand(std::time(NULL));
	std::cout << "I am cloaking..." << std::endl;
	return;
}

NinjaTrap::NinjaTrap(std::string name)
{
	std::srand(std::time(NULL));
	this->_initValue();
	this->_name = name;
	std::cout << "I am a best Ninja ever World..." << std::endl;
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src)
{
	*this = src;
	return;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Or not !!!!" << std::endl;
	return;
}

// __Functions__

void NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "Ninja "
			<< this->_name << " attacks "
			<< target << " at range, causing "
			<< this->_rangedAttackDamage << " points of damage !" << std::endl;

}

void NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "Ninja "
			<< this->_name << " attacks "
			<< target << " at mele, causing "
			<< this->_meleAttackDamage << " points of damage !" << std::endl;
}

void NinjaTrap::_initValue(void)
{
	this->_name = "NinjaTrap";
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
}

void NinjaTrap::ninjaShoebox(NinjaTrap & ninja)
{
	ninja.meleeAttack("The King");
	ninja.rangedAttack("The King");
}

void NinjaTrap::ninjaShoebox(FragTrap & frag)
{
	frag.meleeAttack("mouse");
	frag.vaulthunter_dot_exe("mouse");
}
void NinjaTrap::ninjaShoebox(ScavTrap & scav)
{
	scav.rangedAttack("YOU");
	scav.challengeNewcomer("YOU");
}
