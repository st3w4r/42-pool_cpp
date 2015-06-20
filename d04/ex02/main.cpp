/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 10:22:09 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/20 10:22:10 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;

	std::cout << vlc->push(bob) << std::endl;
	std::cout << vlc->getCount() << std::endl;
	std::cout << vlc->push(jim) << std::endl;
	std::cout << vlc->push(new AssaultTerminator) << std::endl;
	std::cout << vlc->push(new AssaultTerminator) << std::endl;

	// ISquad *s1 = new Squad;
	// vlc->push(new AssaultTerminator);
	// vlc->push(new AssaultTerminator);


	// std::cout << vlc->getCount();
	// for (int i = 0; i < vlc->getCount(); ++i)
	// {
	// 	ISpaceMarine* cur = vlc->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }
	// delete vlc;
	return 0;
}
