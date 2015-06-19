/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 10:41:20 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 10:41:21 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	return;
}

Sorcerer::Sorcerer(std::string const name, std::string const title) : _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
	*this = src;
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
	return;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will neverbe the same !" << std::endl;
	return;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs)
{
	this->_name = rhs._name;
	this->_title = rhs._title;
	return *this;
}

// __Fucntions__
void Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}

// __Getter__

std::string Sorcerer::getName(void) const
{
	return this->_name;
}

std::string Sorcerer::getTitle(void) const
{
	return this->_title;
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs)
{
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
	return o;
}
