/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 18:11:01 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/22 18:11:01 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

const int RobotomyRequestForm::_sign = 72;
const int RobotomyRequestForm::_exec = 45;

RobotomyRequestForm::RobotomyRequestForm(void) :
	Form("Robotomy", RobotomyRequestForm::_sign, RobotomyRequestForm::_exec)
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form(target, RobotomyRequestForm::_sign, RobotomyRequestForm::_exec)
{
	srand(time(NULL));
}


RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) :
	Form("Robotomy", RobotomyRequestForm::_sign, RobotomyRequestForm::_exec)
{
	srand(time(NULL));
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	(void)rhs;
	return *this;
}



void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->checkExecute(executor);

	if (rand() % 2 == 1)
	{
		std::cout << "BRRRRRRiiiiizzzzzBRRRRiizzzzzz" << std::endl;
		std::cout << "<" << this->getName() << "> has been robotomized successfully" << std::endl;
	}
	else
	{
		std::cout << "<" << this->getName() << "> Robotomized failed" << std::endl;
	}
}
