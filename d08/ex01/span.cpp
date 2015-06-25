/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 12:42:30 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/25 12:42:33 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <iostream>

//__NumberExistException__
Span::NumberExistException::NumberExistException(void)
{
	return;
}

Span::NumberExistException::NumberExistException(NumberExistException const & src)
{
	*this = src;
	return;
}

Span::NumberExistException::~NumberExistException(void) throw()
{
	return;
}

Span::NumberExistException & Span::NumberExistException::operator=(Span::NumberExistException const & rhs)
{
	static_cast<void>(rhs);
	return *this;
}

const char * Span::NumberExistException::what() const throw()
{
	return "Number Already Exist";
}

//__EmptyException__
Span::EmptyException::EmptyException(void)
{
	return;
}

Span::EmptyException::EmptyException(EmptyException const & src)
{
	*this = src;
	return;
}

Span::EmptyException::~EmptyException(void) throw()
{
	return;
}

Span::EmptyException & Span::EmptyException::operator=(Span::EmptyException const & rhs)
{
	static_cast<void>(rhs);
	return *this;
}

const char * Span::EmptyException::what() const throw()
{
	return "Invalid Size";
}

//__InvalidNumber__
Span::InvalidNumberException::InvalidNumberException(void)
{
	return;
}

Span::InvalidNumberException::InvalidNumberException(InvalidNumberException const & src)
{
	*this = src;
	return;
}

Span::InvalidNumberException::~InvalidNumberException(void) throw()
{
	return;
}

Span::InvalidNumberException & Span::InvalidNumberException::operator=(Span::InvalidNumberException const & rhs)
{
	static_cast<void>(rhs);
	return *this;
}

const char * Span::InvalidNumberException::what() const throw()
{
	return "Invalid Number";
}


// __Span__

Span::Span(void)
{
	return;
}

Span::Span(Span const & src)
{
	*this = src;
	return;
}

Span::~Span(void)
{
	return;
}

Span::Span(unsigned int n)
{
	addNumber(n);
}

Span & Span::operator=(Span const & rhs)
{
	static_cast<void>(rhs);
	return *this;
}

unsigned int Span::shortestSpan()
{
	unsigned int shortValue = Span::longestSpan();
	std::vector<unsigned int>::const_iterator it;
	std::vector<unsigned int>::const_iterator it2 = _containerInts.begin();
	std::vector<unsigned int>::const_iterator ite = _containerInts.end();

	if (_containerInts.size() == 0 || _containerInts.size() == 1)
		throw Span::EmptyException();

	for (it = _containerInts.begin(); it != ite; it++)
	{
		it2++;
		if (it2 == ite)
			return shortValue;
		if ((*it2 - *it) < shortValue)
			shortValue = (*it2 - *it);
	}

	return shortValue;
}


unsigned int Span::longestSpan()
{
	unsigned int max;
	unsigned int min;

	if (_containerInts.size() == 0 || _containerInts.size() == 1)
		throw Span::EmptyException();

	max = *std::max_element(_containerInts.begin(), _containerInts.end());
	min = *std::min_element(_containerInts.begin(), _containerInts.end());

	return max - min;

}

void Span::addNumber(unsigned int n)
{
	try
	{
		if (static_cast<int>(n) < 0)
			throw Span::InvalidNumberException();

		if (easyfind(_containerInts, n) == true)
			throw Span::NumberExistException();

		std::vector<unsigned int>::iterator it;

		it = _containerInts.begin();
		it = _containerInts.insert(it, n);
		std::sort(_containerInts.begin(), _containerInts.end());
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

template<typename T>
bool Span::easyfind(T container, int n)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), n);
	if(it == container.end())
		return false;
	return true;
}
