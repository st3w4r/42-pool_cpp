/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 11:06:14 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/16 11:06:15 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent event = ZombieEvent();
	event.setZombieType("Mechant");

	Zombie *z1 = event.newZombie("Paul");
	Zombie *z2 = event.newZombie("Jack");
	z1->announce();
	z2->announce();

	delete z1;
	delete z2;

	return (0);
}
