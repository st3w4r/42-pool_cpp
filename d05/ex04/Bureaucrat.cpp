/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 09:20:47 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/22 09:20:49 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// __GradeTooHighException__
Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src)
{
	*this = src;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{

}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & rhs)
{
	(void)rhs;
	return *this;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High Exception";
}


// __GradeTooLowException__

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src)
{
	*this = src;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{

}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const & rhs)
{
	(void)rhs;
	return *this;
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low Exception";
}

//__Bureaucrat__

Bureaucrat::Bureaucrat(void)
{
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else
		_grade = grade;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
	return;
}

Bureaucrat::~Bureaucrat(void)
{
	return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	_grade = rhs._grade;
	return *this;
}

void Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << "<" << _name << "> signs <" << form.getName() << ">" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "<" << _name << "> cannot sign <" << form.getName() << "> because <"
				<< e.what() << ">" << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form)
{

	form.execute(*this);
	std::cout << "<" << _name << "> executes <" << form.getName() << ">" << std::endl;

}

void Bureaucrat::incGrade(void)
{
	if ((_grade - 1) < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else
		_grade--;
}

void Bureaucrat::decGrade(void)
{
	if ((_grade + 1) > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
		_grade++;
}

// __Getter__

int Bureaucrat::getGrade() const
{
	return _grade;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat & rhs)
{
	o << "<" << rhs.getName() << ">" << ", bureaucrat grade <" << rhs.getGrade() << ">" << std::endl;
	return o;
}
