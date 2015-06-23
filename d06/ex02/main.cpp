/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 20:22:09 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/23 20:22:10 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <ctime>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_reference(Base & p)
{
	try
	{
		A & a = dynamic_cast<A &>(p);
		std::cout << "A"  << std::endl;
		static_cast<void>(a);
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		B & b = dynamic_cast<B &>(p);
		std::cout << "B"  << std::endl;
		static_cast<void>(b);
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		C & c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		static_cast<void>(c);
	}
	catch (std::bad_cast &bc)
	{
	}
}

void identify_from_pointer(Base * p)
{
	A * a = dynamic_cast<A *>(p);
	B * b = dynamic_cast<B *>(p);
	C * c = dynamic_cast<C *>(p);

	if (a != NULL)
		std::cout << "A" << std::endl;
	else if (b != NULL)
		std::cout << "B" << std::endl;
	else if (c != NULL)
		std::cout << "C" << std::endl;
}

Base * generate(void)
{
	Base *obj;

	switch (rand() % 3) {
		case 0:
			obj = new A();
		break;
		case 1:
			obj = new B();
		break;
		case 2:
			obj = new C();
		break;
	}
	return obj;
}

int main(void)
{
	srand(time(NULL));

	Base *b = generate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	return (0);
}
