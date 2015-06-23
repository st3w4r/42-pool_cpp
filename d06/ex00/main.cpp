/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 10:55:12 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/23 10:55:13 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Convert.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: " << argv[0] << " " << " [value]" << std::endl;
		return (0);
	}
	double dIn = std::atof(argv[1]);
	try
	{
		std::cout << "char: ";
		char c = Convert::doubleToChar(dIn);
		std::cout << "'" << c << "'" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "int: ";
		std::cout << Convert::doubleToInt(dIn) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "float: ";
		std::cout << Convert::doubleToFloat(dIn) << "f" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "double: ";
		std::cout << Convert::doubleToDouble(dIn) << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
