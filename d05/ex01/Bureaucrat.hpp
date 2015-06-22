/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 09:19:51 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/22 09:20:06 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
	class GradeTooHighException : public std::exception
	{
		private:
		public:
			GradeTooHighException(void);
			GradeTooHighException(GradeTooHighException const & src);
			virtual ~GradeTooHighException(void) throw();

			GradeTooHighException & operator=(GradeTooHighException const & rhs);

			virtual const char * what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		private:
		public:
			GradeTooLowException(void);
			GradeTooLowException(GradeTooLowException const & src);
			virtual ~GradeTooLowException(void) throw();

			GradeTooLowException & operator=(GradeTooLowException const & rhs);

			virtual const char * what() const throw();
	};

	private:
		std::string const _name;
		int _grade;

		Bureaucrat(void);
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);

		Bureaucrat & operator=(Bureaucrat const & rhs);

		void signForm(Form & form);

		void incGrade();
		void decGrade();

		//__Getter__
		int getGrade() const;
		std::string getName() const;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat & rhs);

#endif // END: BUREAUCRAT_HPP
