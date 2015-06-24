/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/24 18:49:05 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/24 18:49:08 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int main(void)
{
	try
	{
		Array<int> tab(5);

		tab[0] = 2;
		tab[1] = 42;
		tab[2] = 21;
		tab[3] = 50;
		tab[4] = 600;
		for (int i = 0; i < 5; i++)
			std::cout << tab[i] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		Array<std::string> tab(5);

		tab[0] = "Ok";
		tab[1] = "Yeah";
		tab[2] = "HEY";
		tab[3] = "Oh";
		tab[4] = "YES";
		for (int i = 0; i < 5; i++)
			std::cout << tab[i] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
