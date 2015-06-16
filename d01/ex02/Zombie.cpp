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

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	std::cout << "New Zombie" << std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << "Zombie DEAD" << std::endl;
	return;
}

void Zombie::announce() const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")>"
				<< " Braiiiiiiinnnssss..." << std::endl;
}
