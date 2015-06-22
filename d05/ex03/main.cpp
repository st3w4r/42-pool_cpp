/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 09:20:51 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/22 09:20:54 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
		Bureaucrat b1 = Bureaucrat("The Bureaucrat 1", 40);
		Intern i1;
		Form *f1;
		Form *f2;
		Form *f3;
		Form *f4;


		f1 = i1.makeForm("RobotomyRequest", "Bender");
		f2 = i1.makeForm("PresidentialPardon", "Bender");
		f3 = i1.makeForm("ShrubberyCreation", "Bender");
		std::cout << *f1;
		std::cout << *f2;
		std::cout << *f3;

		b1.signForm(*f1);

		f4 = i1.makeForm("TEST", "Bender");

	return (0);
}
