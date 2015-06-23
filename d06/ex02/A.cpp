/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 20:08:02 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/23 20:08:06 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void)
{
	return;
}

A::A(A const & src)
{
	*this = src;
	return;
}

A::~A(void)
{
	return;
}

A & A::operator=(A const & rhs)
{
	static_cast<void>(rhs);
	return *this;
}
