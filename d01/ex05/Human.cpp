/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:14:08 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/16 16:14:09 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
	return;
}

Human::~Human()
{
	return;
}

std::string Human::identify() const
{
	std::stringstream ss;

	ss << &(this->_brain);
	return ss.str();
}

const Brain &Human::getBrain()
{
	return this->_brain;
}
