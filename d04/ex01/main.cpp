/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 13:49:21 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 15:48:16 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aweapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include <iostream>

int main()
{
	// Character* zaz = new Character(``zaz'');
	// std::cout << *zaz;
	// Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	// zaz->equip(pr);
	// std::cout << *zaz;
	// zaz->equip(pf);
	// zaz->attack(b);
	// std::cout << *zaz;
	// zaz->equip(pr);
	// std::cout << *zaz;
	// zaz->attack(b);
	// std::cout << *zaz;
	// zaz->attack(b);
	// std::cout << *zaz;
	return 0;
}
