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

int main(void)
{
	{
		std::cout << std::endl << "Init: 3 Inc: 3" << std::endl;
		try
		{
			Bureaucrat b = Bureaucrat("test", 3);
			std::cout << b.getName() << std::endl;

			std::cout << b.getGrade() << std::endl;
			b.incGrade();
			std::cout << b.getGrade() << std::endl;
			b.incGrade();
			std::cout << b.getGrade() << std::endl;
			b.incGrade();
			std::cout << b.getGrade() << std::endl;

		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << "Init: 148 Dec: 3" << std::endl;
		try
		{
			Bureaucrat b = Bureaucrat("test", 148);
			std::cout << b.getGrade() << std::endl;
			b.decGrade();
			std::cout << b.getGrade() << std::endl;
			b.decGrade();
			std::cout << b.getGrade() << std::endl;
			b.decGrade();
			std::cout << b.getGrade() << std::endl;
			b.incGrade();
			std::cout << b.getGrade() << std::endl;
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}


	{
		std::cout << std::endl << "Init: 60 Inc: 2 Dec: 1" << std::endl;
		try
		{
			Bureaucrat b = Bureaucrat("test", 60);
			b.incGrade();
			std::cout << b.getGrade() << std::endl;
			b.incGrade();
			std::cout << b.getGrade() << std::endl;
			b.decGrade();
			std::cout << b.getGrade() << std::endl;

		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << "Init: 151" << std::endl;
		try
		{
			Bureaucrat b = Bureaucrat("test", 151);
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << "Init: 0" << std::endl;
		try
		{
			Bureaucrat b = Bureaucrat("test", 0);
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		try
		{
			Bureaucrat b = Bureaucrat("test", 60);
			std::cout << std::endl << b << std::endl;

			Bureaucrat a = Bureaucrat("HEY", 10);
			std::cout << a << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
