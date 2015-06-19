/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 10:41:27 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 10:41:28 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Victim.hpp"

Victim::Victim(void)
{
	return;
}

Victim::Victim(std::string const name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim::Victim(Victim const & src)
{
	*this = src;
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
	return;
}

Victim::~Victim(void)
{
	std::cout << "Victim  " << this->_name << " just died for no apparent reason !" << std::endl;
	return;
}

void Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

Victim & Victim::operator=(Victim const & rhs)
{
	this->_name = rhs._name;
	return *this;
}

// __Getter__

std::string Victim::getName(void) const
{
	return this->_name;
}

// __Setter__
void Victim::setName(std::string name)
{
	this->_name = name;
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs)
{
	o << "I am " << rhs.getName() << " and I like otters !" << std::endl;
	return o;
}
