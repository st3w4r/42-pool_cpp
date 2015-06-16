/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 11:05:22 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/16 11:05:24 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "New Zombie" << std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << "Zombie DEAD" << std::endl;
	return;
}

void	Zombie::initZombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

void Zombie::announce() const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")>"
				<< " Braiiiiiiinnnssss..." << std::endl;
}
