/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:13:50 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/16 16:13:52 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	return;
}

Brain::~Brain()
{
	return;
}

std::string Brain::identify() const
{
	std::stringstream ss;

	ss << this;
	return ss.str();
}
