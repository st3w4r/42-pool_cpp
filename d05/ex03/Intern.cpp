/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 23:48:14 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/22 23:48:16 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// __FormNotExist__
Intern::FormNotExist::FormNotExist(void)
{
}

Intern::FormNotExist::FormNotExist(FormNotExist const & src)
{
	*this = src;
}

Intern::FormNotExist::~FormNotExist(void) throw()
{

}

Intern::FormNotExist & Intern::FormNotExist::operator=(FormNotExist const & rhs)
{
	(void)rhs;
	return *this;
}

const char * Intern::FormNotExist::what() const throw()
{
	return "Name of Form is not find in list";
}

// __Intern_

Intern::Intern(void)
{
	return;
}

Intern::Intern(Intern const & src)
{
	*this = src;
	return;
}

Intern::~Intern(void)
{
	return;
}

Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return *this;
}

Form * Intern::searchForm(std::string nameForm, std::string targetForm)
{
	Form * (Intern::*arrPtrF[3])(std::string const & target) = {
																&Intern::robotomyRequest,
																&Intern::presidentialPardon,
																&Intern::shrubberyCreation
																};

	const std::string arrNameForm[] = {
											"RobotomyRequest",
											"PresidentialPardon",
											"ShrubberyCreation"

										};

	for (int i = 0; i < 3; i++)
	{
		if (arrNameForm[i].compare(nameForm) == 0)
		{
			std::cout << "Intern creates <" << nameForm << ">" << std::endl;
			return (this->*arrPtrF[i])(targetForm);
		}
	}
	throw Intern::FormNotExist();
}

Form * Intern::makeForm(std::string nameForm, std::string targetForm)
{
	try
	{
		return Intern::searchForm(nameForm, targetForm);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return NULL;
}


Form * Intern::robotomyRequest(std::string const & target)
{
	return new RobotomyRequestForm(target);
}

Form * Intern::presidentialPardon(std::string const & target)
{
	return new PresidentialPardonForm(target);
}

Form * Intern::shrubberyCreation(std::string const & target)
{
	return new ShrubberyCreationForm(target);
}
