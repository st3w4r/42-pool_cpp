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
		std::cout << std::endl << "Init: 4 Inc: 3 Inc: 1 Dec: 150" << std::endl;
		try
		{
			Bureaucrat b = Bureaucrat("test", 4);
			std::cout << b.getName() << std::endl;
			std::cout << b.getGrade() << std::endl;
			b.incGrade(3);
			std::cout << b.getGrade() << std::endl;
			b.incGrade(1);
			std::cout << b.getGrade() << std::endl;
			b.decGrade(150);
			std::cout << b.getGrade() << std::endl;

		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << "Init: 4 Inc: 3 Dec: 150" << std::endl;
		try
		{
			Bureaucrat b = Bureaucrat("test", 4);
			std::cout << b.getGrade() << std::endl;
			b.incGrade(3);
			std::cout << b.getGrade() << std::endl;
			b.decGrade(150);
			std::cout << b.getGrade() << std::endl;

		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << "Init: 60 Inc: 1 Dec: 10" << std::endl;
		try
		{
			Bureaucrat b = Bureaucrat("test", 60);
			b.incGrade(1);
			std::cout << b.getGrade() << std::endl;
			b.decGrade(10);
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
		Bureaucrat b = Bureaucrat("test", 60);
		std::cout << std::endl << b << std::endl;

		Bureaucrat a = Bureaucrat("HEY", 10);
		std::cout << a << std::endl;
	}
	return (0);
}
