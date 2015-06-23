/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 20:08:41 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/23 20:08:42 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C(void)
{
	return;
}

C::C(C const & src)
{
	*this = src;
	return;
}

C::~C(void)
{
	return;
}

C & C::operator=(C const & rhs)
{
	static_cast<void>(rhs);
	return *this;
}
