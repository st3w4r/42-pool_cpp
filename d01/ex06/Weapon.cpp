/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 17:49:44 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/16 17:49:45 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon(std::string type) : _type(type)
{
	return;
}

~Weapon()
{
	return;
}

Weapon::setType(std::string type)
{
	this->_type = type;
}
