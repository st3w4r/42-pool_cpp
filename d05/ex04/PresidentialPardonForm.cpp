/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 18:11:18 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/22 18:11:19 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

const int PresidentialPardonForm::_sign = 25;
const int PresidentialPardonForm::_exec = 5;

PresidentialPardonForm::PresidentialPardonForm(void) :
	Form("Anonymous", "Presidential", PresidentialPardonForm::_sign, PresidentialPardonForm::_exec)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	Form(target, "Presidential", PresidentialPardonForm::_sign, PresidentialPardonForm::_exec)
{
}


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) :
	Form("Anonymous", "Presidential", PresidentialPardonForm::_sign, PresidentialPardonForm::_exec)
{
	*this = src;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	(void)rhs;
	return *this;
}



void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);

	std::cout << "<" << this->getTarget() << "> has been pardoned by Zafod Beeblebrox." << std::endl;
}
