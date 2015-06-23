/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 20:07:57 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/23 20:07:58 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base(void)
{
	return;
}

Base::Base(Base const & src)
{
	*this = src;
	return;
}

Base::~Base(void)
{
	return;
}

Base & Base::operator=(Base const & rhs)
{
	static_cast<void>(rhs);
	return *this;
}
