/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 10:46:11 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/17 10:46:12 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void) : _n(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::Fixed(int const n) : _n(n << this->_fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(float const n) : _n(roundf(n * (1 << this->_fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;

	this->_n = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return this->_n;
}

void Fixed::setRawBits(int const raw)
{
	this->_n = raw;
	return;
}

float Fixed::toFloat(void) const
{
	return this->_n / (float)(1 << this->_fractionalBits);
}

int Fixed::toInt(void) const
{
	return this->_n / (1 << this->_fractionalBits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
