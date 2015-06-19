/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 10:40:59 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 10:41:00 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) : Victim("Peon")
{
	return;
}

Peon::Peon(std::string const name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src) : Victim(src.getName())
{
	*this = src;
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return;
}

Peon & Peon::operator=(Peon const & rhs)
{
	this->setName(rhs.getName());
	return *this;
}

void Peon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
}
