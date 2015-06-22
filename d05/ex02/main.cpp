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

int main(void)
{/*
	std::cout << "_____Form_____" << std::endl;
	{
		Bureaucrat b1 = Bureaucrat("The Bureaucrat 1", 40);
		Bureaucrat b2 = Bureaucrat("The Bureaucrat 2", 10);

		Form f1 = Form("Form 1", 50, 70);
		Form f2 = Form("Form 2", 20, 70);
		Form f3 = Form("Form 3", 30, 70);


		b1.signForm(f1);
		std::cout << b1;
		std::cout << f1 << std::endl;
		std::cout << std::endl;

		b1.signForm(f2);
		std::cout << b1;
		std::cout << f2 << std::endl;
		std::cout << std::endl;

		b2.signForm(f1);
		std::cout << b2;
		std::cout << f1 << std::endl;
		std::cout << std::endl;

		b2.signForm(f2);
		std::cout << b2;
		std::cout << f2 << std::endl;

		b2.signForm(f3);
		std::cout << b2;
		std::cout << f3 << std::endl;

		b1.signForm(f3);
		std::cout << b1;
		std::cout << f3 << std::endl;


	}*/
	/*
	{
		Bureaucrat b2 = Bureaucrat("The Bureaucrat 2", 136);
		ShrubberyCreationForm s1 = ShrubberyCreationForm("S1");

		b2.signForm(s1);
		b2.executeForm(s1);


		Bureaucrat b3 = Bureaucrat("The Bureaucrat 3", 45);
		RobotomyRequestForm r1 = RobotomyRequestForm("R1");

		b3.signForm(r1);
		b3.executeForm(r1);

		Bureaucrat b4 = Bureaucrat("The Bureaucrat 3", 2);
		PresidentialPardonForm p1 = PresidentialPardonForm("P1");

		b4.signForm(p1);
		b4.executeForm(p1);
	}
*/

		{
			Bureaucrat					b1("B1", 150);
			try
			{

				ShrubberyCreationForm	 	test01("SCF_1");
				RobotomyRequestForm	 		test02("RRF_1");
				PresidentialPardonForm	 	test03("PDF_1");

				std::cout << b1 << std::endl;
				std::cout << test01 << std::endl;
				std::cout << test02 << std::endl;
				std::cout << test03 << std::endl;

				b1.signForm(test01);
				b1.signForm(test02);
				b1.signForm(test03);

				b1.executeForm(test01);
				b1.executeForm(test02);
				b1.executeForm(test03);

			}
			catch(std::exception &e){
				std::cout << e.what() << std::endl;
			}
		}

		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

	{
		try
		{

			Bureaucrat					b2("B2", 20);
			ShrubberyCreationForm	 	test01("SCF_2");
			RobotomyRequestForm	 		test02("RRF_2");
			PresidentialPardonForm	 	test03("PDF_2");

			std::cout << b2 << std::endl;
			std::cout << test01 << std::endl;
			std::cout << test02 << std::endl;
			std::cout << test03 << std::endl;

			b2.signForm(test01);
			b2.signForm(test02);
			b2.signForm(test03);

			b2.executeForm(test01);
			b2.executeForm(test02);
			b2.executeForm(test03);

		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	{
		try
		{
			Bureaucrat					b3("B3", 1);
			PresidentialPardonForm	 	test01("PDF_3");
			std::cout << b3 << std::endl;
			std::cout << test01 << std::endl;


			b3.signForm(test01);

			b3.executeForm(test01);

		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}

		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

	{

		try
		{
			Bureaucrat				b4("B4", 70);
			RobotomyRequestForm	 	test01("RRF_4");
			std::cout << b4 << std::endl;
			std::cout << test01 << std::endl;


			b4.signForm(test01);

			b4.executeForm(test01);

		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	{
		try
		{
			Bureaucrat					b5("B5", 140);
			ShrubberyCreationForm	 	test01("SCF_5");
			std::cout << b5 << std::endl;
			std::cout << test01 << std::endl;


			b5.signForm(test01);

			b5.executeForm(test01);

		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}

	return (0);
}
