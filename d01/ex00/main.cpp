/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 10:20:27 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/16 10:20:28 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony ponyOnTheStack()
{
	Pony ponyStack = Pony("PonyStack");
	return (ponyStack);
}

Pony *ponyOnTheHeap()
{
	Pony *ponyHeap = new Pony("PonyHeap");
	return (ponyHeap);
}

int main()
{
	Pony ponyStack = ponyOnTheStack();
	Pony *ponyHeap = ponyOnTheHeap();

	delete ponyHeap;
	std::cout << "Is Destroy" << std::endl;
	return (0);
}
