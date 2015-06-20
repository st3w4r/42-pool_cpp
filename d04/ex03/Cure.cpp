/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 22:14:37 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/20 22:14:38 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"

Cure::Cure(void)
{
	xp_ = 0;
	type_ = "cure";
	return;
}

Cure::Cure(Cure const & src)
{
	*this = src;
	return;
}

Cure::~Cure(void)
{
	return;
}

Cure & Cure::operator=(Cure const & rhs)
{
	return *this;
}

Cure* Cure::clone() const
{
	return (new Cure);
}

void Cure::use(ICharacter& target)
{
	xp_ += 10;
	std::cout << "* shoots an ice bolt at " << target._name << " *" << std::endl;
}
