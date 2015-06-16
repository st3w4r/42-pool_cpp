/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 10:20:19 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/16 10:20:20 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name) : _name(name)
{
	std::cout << "Poney Create: " << this->_name << std::endl;
}

Pony::~Pony()
{
	std::cout << "Poney Destroy: " << this->_name << std::endl;
}
