/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 19:08:39 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/25 19:08:44 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string>
// #include <iostream>
#include <list>
#include "mutantstack.hpp"

int main()
{

std::cout << "_________MutantStack__________" << std::endl;
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Top:" << mstack.top() << std::endl;

	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	// std::stack<int> s(mstack);
}

std::cout << "_________LIST__________" << std::endl;
{
	std::list<int> mstack;
	mstack.push_front(5);
	mstack.push_front(17);
	std::cout << "Top: " << mstack.front() << std::endl;
	mstack.pop_front();
	std::cout << "Top: " << mstack.front() << std::endl;

	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push_front(3);
	mstack.push_front(5);
	mstack.push_front(737);
	//[...]
	mstack.push_front(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	// std::stack<int> s(mstack);
}
	return 0;
}
