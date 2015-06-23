/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 21:57:43 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/23 21:57:44 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void) : _signer(NULL), _executor(NULL), _intern(NULL), _f(NULL)
{
	return;
}

OfficeBlock::OfficeBlock(OfficeBlock const & src)
{
	*this = src;
	return;
}

OfficeBlock::~OfficeBlock(void)
{
	return;
}

OfficeBlock & OfficeBlock::operator=(OfficeBlock const & rhs)
{
	(void)rhs;
	return *this;
}

void OfficeBlock::doBureaucracy(std::string form, std::string target)
{
	_f = _intern->makeForm(form, target);
	_signer->signForm(*_f);
	_executor->executeForm(*_f);
}

//__Setter__
void OfficeBlock::setIntern(Intern & intern)
{
	_intern = &intern;
}

void OfficeBlock::setSigner(Bureaucrat & signer)
{
	_signer = &signer;
}

void OfficeBlock::setExecutor(Bureaucrat & executor)
{
	_executor = &executor;
}
