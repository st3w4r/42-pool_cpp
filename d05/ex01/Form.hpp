/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 14:26:48 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/22 14:26:49 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
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
		const std::string _name;
		const int _gradeSign;
		const int _gradeExecute;
		bool _isSigned;

		Form(void);
	public:
		Form(std::string name, int gradeSign, int gradeExecute);
		Form(Form const & src);
		~Form(void);

		Form & operator=(Form const & rhs);

		void beSigned(Bureaucrat & bureaucrat);

		//__Getter__
		std::string getName() const;
		int getGradeSign() const;
		int getGradeExecute() const;
		bool getSigned() const;

};

std::ostream & operator<<(std::ostream & o, Form & rhs);
#endif // END: FORM_HPP
