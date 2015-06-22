/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 23:48:11 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/22 23:48:25 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
	class FormNotExist : public std::exception
	{
		private:
		public:
			FormNotExist(void);
			FormNotExist(FormNotExist const & src);
			virtual ~FormNotExist(void) throw();

			FormNotExist & operator=(FormNotExist const & rhs);

			virtual const char * what() const throw();
	};

	private:
	public:
		Intern(void);
		Intern(Intern const & src);
		~Intern(void);

		Intern & operator=(Intern const & rhs);


		Form * searchForm(std::string nameForm, std::string targetForm);
		Form * makeForm(std::string nameForm, std::string targetForm);

		Form * robotomyRequest(std::string const & target);
		Form * presidentialPardon(std::string const & target);
		Form * shrubberyCreation(std::string const & target);

};

#endif // END: INTERN_HPP
