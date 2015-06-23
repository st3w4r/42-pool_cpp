/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 11:11:07 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/23 11:11:10 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

// __NoneDisplayableChar__
Convert::NoneDisplayableException::NoneDisplayableException(void)
{
	return;
}

Convert::NoneDisplayableException::NoneDisplayableException(NoneDisplayableException const & src)
{
	*this = src;
	return;
}

Convert::NoneDisplayableException::~NoneDisplayableException(void) throw()
{
	return;
}

Convert::NoneDisplayableException & Convert::NoneDisplayableException::operator=(Convert::NoneDisplayableException const & rhs)
{
	(void)rhs;
	return *this;
}

const char * Convert::NoneDisplayableException::what() const throw()
{
	return "Non displayable";
}

// __ImpossibleException__
Convert::ImpossibleException::ImpossibleException(void)
{
	return;
}

Convert::ImpossibleException::ImpossibleException(ImpossibleException const & src)
{
	*this = src;
	return;
}

Convert::ImpossibleException::~ImpossibleException(void) throw()
{
	return;
}

Convert::ImpossibleException & Convert::ImpossibleException::operator=(Convert::ImpossibleException const & rhs)
{
	(void)rhs;
	return *this;
}

const char * Convert::ImpossibleException::what() const throw()
{
	return "impossible";
}


// __Convert__
Convert::Convert(void)
{
	return;
}

Convert::Convert(Convert const & src)
{
	*this = src;
	return;
}

Convert::~Convert(void)
{
	return;
}

Convert & Convert::operator=(Convert const & rhs)
{
	(void)rhs;
	return *this;
}

int Convert::doubleToInt(double dIn)
{
	int i;

	if (isinf(dIn) == true)
		throw Convert::ImpossibleException();
	if (dIn > static_cast<double>(INT_MAX) || dIn < static_cast<double>(INT_MIN))
		throw Convert::ImpossibleException();
	if (isnan(dIn) == true)
		throw Convert::ImpossibleException();
	i = static_cast<int>(dIn);

	return i;
}

char Convert::doubleToChar(double dIn)
{
	char c;

	if (isnan(dIn) == true)
		throw Convert::ImpossibleException();
	c = static_cast<char>(dIn);
	if (std::isprint(c) == false)
		throw Convert::NoneDisplayableException();
	return c;
}

double Convert::doubleToDouble(double dIn)
{
	double d;

	d = static_cast<double>(dIn);
	return d;
}

float Convert::doubleToFloat(double dIn)
{
	float f;

	f = static_cast<float>(dIn);
	return f;
}
