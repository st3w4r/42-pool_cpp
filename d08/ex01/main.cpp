/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 12:42:41 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/25 12:42:44 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int main(void)
{
	std::cout << "_______" << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout <<  "Longest Span: " << sp.longestSpan() << std::endl;
		std::cout <<  "Shortest Span: " << sp.shortestSpan() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "_______" << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(3);
		std::cout <<  "Longest Span: " << sp.longestSpan() << std::endl;
		std::cout <<  "Shortest Span: " << sp.shortestSpan() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "_______" << std::endl;
	{
		try
		{

			Span sp = Span(5);
			std::cout <<  "Longest Span: " << sp.longestSpan() << std::endl;
			std::cout <<  "Shortest Span: " << sp.shortestSpan() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "_______" << std::endl;
	{
		try
		{

			Span sp;
			sp.addNumber(0);
			sp.addNumber(-1);
			std::cout <<  "Longest Span: " << sp.longestSpan() << std::endl;
			std::cout <<  "Shortest Span: " << sp.shortestSpan() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
