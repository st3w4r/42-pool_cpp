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

int main(void)
{
	std::cout << "_____Form_____" << std::endl;
	{
		Bureaucrat b1 = Bureaucrat("The Bureaucrat 1", 40);
		Bureaucrat b2 = Bureaucrat("The Bureaucrat 2", 20);

		Form f1 = Form("Form 1", 50, 70);
		Form f2 = Form("Form 2", 20, 70);


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

	}
	return (0);
}
