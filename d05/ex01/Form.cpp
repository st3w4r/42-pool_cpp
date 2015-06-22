/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 14:26:51 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/22 14:26:53 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// __GradeTooHighException__
Form::GradeTooHighException::GradeTooHighException(void)
{
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src)
{
	*this = src;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{

}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(GradeTooHighException const & rhs)
{
	(void)rhs;
	return *this;
}

const char * Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High Exception";
}


// __GradeTooLowException__

Form::GradeTooLowException::GradeTooLowException(void)
{
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src)
{
	*this = src;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{

}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(GradeTooLowException const & rhs)
{
	(void)rhs;
	return *this;
}

const char * Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low Exception";
}

//__Form__

Form::Form(void) : _name("Form"), _gradeSign(1), _gradeExecute(1), _isSigned(false)
{
	return;
}

Form::Form(std::string name, int gradeSign, int gradeExecute) :
			_name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute), _isSigned(false)
{
	if (gradeSign > 150 || gradeExecute > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else if (gradeSign < 1 || gradeExecute < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	return;
}

Form::Form(Form const & src) : _name(src._name), _gradeSign(src._gradeSign), 			_gradeExecute(src._gradeExecute)
{
	*this = src;
	return;
}

Form::~Form(void)
{
	return;
}

Form & Form::operator=(Form const & rhs)
{
	_isSigned = rhs._isSigned;
	return *this;
}

void Form::beSigned(Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeSign) // Si le bureaucrat ne peut pas sign form
	{
		throw Form::GradeTooLowException();
	}
	else
		_isSigned = true;
}


std::ostream & operator<<(std::ostream & o, Form & rhs)
{
	o << "Name: " << rhs.getName() << " Grade Sign: " << rhs.getGradeSign()
		<< " Grade Execute: " << rhs.getGradeExecute() << " Signed: " << rhs.getSigned()
		<< std::endl;
	return o;
}

//__Getter__
std::string Form::getName() const
{
	return _name;
}

int Form::getGradeSign() const
{
	return _gradeSign;
}

int Form::getGradeExecute() const
{
	return _gradeExecute;
}

bool Form::getSigned() const
{
	return _isSigned;
}
