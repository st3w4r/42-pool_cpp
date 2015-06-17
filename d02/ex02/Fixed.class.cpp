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
	return;
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
	return;
}

Fixed::Fixed(int const n) : _n(n << this->_fractionalBits)
{
	return;
}

Fixed::Fixed(float const n) : _n(roundf(n * (1 << this->_fractionalBits)))
{
	return;
}

Fixed::~Fixed(void)
{
	return;
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

// __Operator Overload__
// __Comparaison__
Fixed & Fixed::operator=(Fixed const & rhs)
{
	this->_n = rhs.getRawBits();
	return *this;
}

bool Fixed::operator>(Fixed const & rhs)
{
	return (this->_n > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs)
{
	return (this->_n < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs)
{
	return (this->_n >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs)
{
	return (this->_n <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs)
{
	return (this->_n == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs)
{
	return (this->_n != rhs.getRawBits());
}

// __Arithmetic__
Fixed Fixed::operator+(Fixed const & rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const & rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const & rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const & rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

// __Increment Decrement Operator__
Fixed & Fixed::operator++()
{
	++(this->_n);
	return *this;
}

Fixed & Fixed::operator--()
{
	--(this->_n);
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	++(*this);
	return old;
}

Fixed Fixed::operator--(int)
{
	Fixed old = *this;
	--(*this);
	return old;
}

// __Max Min__
Fixed Fixed::max(Fixed const & a, Fixed const & b)
{
	return (((a.toFloat() > b.toFloat()) ? a : b));
}

Fixed Fixed::min(Fixed const & a, Fixed const & b)
{
	return (((a.toFloat() > b.toFloat()) ? b : a));
}
