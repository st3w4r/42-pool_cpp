/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 20:08:45 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/23 20:08:46 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B(void)
{
	return;
}

B::B(B const & src)
{
	*this = src;
	return;
}

B::~B(void)
{
	return;
}

B & B::operator=(B const & rhs)
{
	static_cast<void>(rhs);
	return *this;
}
